#include "shellheader.h"

/**
 * take_user_input - takes user input for execution on the shell
 * @shell_command: a string inputed by user
 * @shell_command_size: holds the size of inputed string
 *
 * Description: function uses fgets to read a line from stdin, handles..
 * ..end-of-file and input errors, and removes the trailing newline.
 * Return: nothing
 */

void take_user_input(char *shell_command, size_t shell_command_size)
{
	while (fgets(shell_command, shell_command_size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			built_putchar('\n');
			exit(0);
		}
		else
		{
			built_printf("User input error.\n");
			exit(1);
		}
	}
	shell_command[strcspn(shell_command, "\n")] = '\0';
}
