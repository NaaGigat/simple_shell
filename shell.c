#include "shell.h"


/**
 * main - Simple shell
 * @argc: count of argument
 * @argv: vector of argument values.
 * Return: 0 Always.
 */

int main(__attribute__((unused)) int argc,
__attribute__((unused)) char **argv)
{

	/*Load config files, if any.*/

	/* Run command loop.*/
	_loop();

	/* Perform any shutdown/cleanup.*/

	return (0);
}
