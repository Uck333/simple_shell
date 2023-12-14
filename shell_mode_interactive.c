#include "shellheader.h"

/**
 * shell_mode_interactive - determine if the mode shell is running in
 * i.e interactive mode or otherwise.
 * @mode: structure of type kele_jo
 *
 * Description: The function returns an integer: 1 if the shell is..
 * ..in interactive mode and 0 otherwise.
 * Return: As described.
 */
int shell_mode_interactive(kele_jo *mode)
{
	if (isatty(STDIN_FILENO))
	{
		if (mode->mode's_file_descriptor <= 2)
		{
			return (1);
		}
	}
	return (0);
}
