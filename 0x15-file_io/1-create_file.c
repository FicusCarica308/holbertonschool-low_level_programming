#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 *string_length - finds the length of our our content string
 *@s: text_content string
 *Return: returns the length of the string
 */
int string_length(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
/**
 *create_file - creates a file with a given text
 *@filename: the name of the file to create
 *@text_content: the content that the file will have
 *Return: returns -1 on failure and 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	int print;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		length = string_length(text_content);
	print = write(fd, text_content, length);
	if (print == -1)
		return (-1);
	close(fd);
	return (1);
}
