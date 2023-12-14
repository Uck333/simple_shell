#include "shell_header.h"

/**
 * alphabet_check - identifies alphabets
 * @k: characta to check
 *
 * Description: as above and below.
 * Return: function returns 1 if k is an alphabet, and 0 otherwise
 */

int alphabet_check(int k)
{
	while ((k >= 'A' && k <= 'Z') || (k >= 'a' && k <= 'z'))
	{
		return (1);
	}
	return (0);
}
