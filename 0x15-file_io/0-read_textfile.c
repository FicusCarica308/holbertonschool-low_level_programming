#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile -  a function that reads a text file and prints it to
 * the POSIX standard output.
 *@filename: The file we are printing
 *@letters: the number of letters we should print
 *Return: returns the actual numberof letter printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int act_size;
	char *buffer;
	int char_count;

	if (filename == NULL || letters <= 0)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	act_size = read(fd, buffer, letters);
	if (act_size == -1)
		return (0);
	char_count = write(STDOUT_FILENO, buffer, act_size);
	if (char_count == -1)
		return (0);
	free(buffer);
	close(fd);

	return (char_count);
}
