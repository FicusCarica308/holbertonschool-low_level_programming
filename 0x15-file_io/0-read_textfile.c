#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 *check - collects a system call return value and checks if it returned error
 *@sysCall: the system call return value
 */
void check(int sysCall)
{
	if (sysCall == -1)
		exit(0);
}
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
	check(fd);
	act_size = read(fd, buffer, letters);
	check(act_size);
	char_count = write(STDOUT_FILENO, buffer, act_size);
	check(char_count);
	free(buffer);
	close(fd);

	return (char_count);
}
