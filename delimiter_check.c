#include "shellheader.h"

/**
 * delimiter_check - determines if a given characta is a delimita
 * @k: character to be checked
 * @string_checked: string checked for delimiters
 *
 * Description: The function returns an integer: 1 if the character is..
 * ..found in the delimiter string (true), and 0 if it is not found (false).
 * Return: As described.
 */
int delimiter_check(char k, char *string_checked)
{
	while (*string_checked)
	{
		if (*string_checked++ == k)
		{
			return (1);
		}
	}
	return (0);
}

