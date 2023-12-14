#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @ac: number of arguments/items in av
 * @av: a null terminated array of strings
 *
 * Description: program that prints all the arguments, without using ac
 * Return: Always 0 if successful
 */

int main(int ac, char **av)
{
	int i;

	for (i = 1; (av[i] != NULL) && (ac != '\0'); i++)
		printf("%s\n", av[i]);
	return (0);
}
