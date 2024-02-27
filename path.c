#include "shell.h"

/**
 * path_g - returns the value of the PATH enviroment variable.
 *
 * Return: A Pointer to the value of $PATH.
 */
char *path_g(void)
{
	return (_getenv("PATH"));
}
