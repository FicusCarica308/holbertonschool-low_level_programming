#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 *
 *
 */
int main(int ac, char *av[] __attribute__((unused)))
{
	int d_frm, d_to, bytes = 0, byte_hold = 0;
	char nm_to, nm_from;
	char chunk[1024];

	if (ac > 3 || ac < 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	nm_from = av[1];
	nm_to = av[2];
	/*open file from and read*/
	d_frm = open(nm_from, O_RDONLY);
	if (d_frm == -1)
	{
		write(2, "Error: Can't read from file NAME_OF_THE_FILE\n", 46);
		exit(98);
	}
	while (byte_hold != 0)
	{
		byte_hold = read(d_frm, chunk, 1024);
		if (byte_hold == -1)
		{
			write(2, "Error: Can't read from file NAME_OF_THE_FILE\n", 46);
			exit(98);
		}
		bytes += byte_hold
	}
	/*open file to, and write*/
	d_to = open(nm_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (d_to == -1)
	{
		write(2, "Error: Can't write to NAME_OF_THE_FILE\n", 40);
		exit(99);
	}
	write(d_to, d_frm, bytes);
	return (0);
}
