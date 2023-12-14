#include "shell_header.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: A program to tokenize user input command
 * Return: Always 0 for success
 */

int main(void)
{
	char shell_command[200] = "God is Good";

	/* Initialize variables for tokenization */
	char *shell_token;
	char *shell_delim = " ";

	// Tokenize the input command
	shell_token = strtok(shell_command, shell_delim);

	while (shell_token != NULL)
	{
		printf("Token: %s\n", shell_token);
		shell_token = strtok(NULL, shell_delim); // Pass NULL to continue tokenization
	}
	return (0);
}
