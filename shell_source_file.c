#include "shell_header.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The main source file that cordinates the shell
 * Return: Always 0 for success
 */

int main(void)
{
	char shell_command[200];

	while (1)
	{
		display_shell_prompt();
		shell_command_executer(shell_command);
		take_user_input(shell_command, sizeof(shell_command));
	}
	return (0);
}
