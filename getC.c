#include "shell.h"

/**
 * _getc - Reads a text file and prints to the POSIX
 * Return: character
 */

int _getc(void)
{
	char buf[1];
	char *chr;
	int res_read;

	res_read = read(STDIN_FILENO, buf, 1);
	if (res_read > 0)
	{
		chr = buf;
		return (*chr);
	}

	if (res_read == -1)
		return (0);

	return (EOF);
}
