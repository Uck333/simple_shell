#include "shell_header.h"

/**
 * built_printf - prints to stdout i.e mimicks printf()
 * @k: to print
 *
 * Description: as above and below
 * Return: nothing for success
 */

void built_printf(char *k)
{
	write(1, k, strlen(k));
}
