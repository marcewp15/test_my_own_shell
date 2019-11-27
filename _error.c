#include "shell.h"
/**
 * _error - print error messages
 *
 *
 */
char *_error(char *namefile, char **buf)
{

	write(STDOUT_FILENO, av[0], _strlen(av[0]));
	write(STDOUT_FILENO, cont, 4);
	write(STDOUT_FILENO, av[1], _strlen(av[1]));
	write(STDOUT_FILENO,"not found",9);
}
