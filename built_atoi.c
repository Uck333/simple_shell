#include <shellheader.h>

/**
 * built_atoi - string to integer converter
 * @k: a string ready for conversion
 *
 * Description: as above and below
 * Return: returns 0 if no num found in str, else the number value
 */

int built_atoi(char *k)
{
	int value = 1, emblem = 0, product = 0;

	for (;  *k && emblem != 2; k++)
	{
		if ((*k == '-') && (emblem == 1))
			value *= -1;

		else if (*k >= '0' && *k <= '9' && (emblem == 1))
			product = product * 10 + (*k - '0');
		else if (emblem == 1)
			emblem = 2;
	}
	return (value * product);
}
