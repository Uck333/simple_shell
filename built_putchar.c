#include "shellheader.h"

/**
 * built_putchar - prints a character (k in this case) to stdout
 * @k: char to print
 *
 * Description: as above and below
 * Return: 1 for success, else -1 is returned..
 * ..and errno is set accordingly.
 */
int built_putchar(char k)
{
	return (write(1, &k, 1));
}
