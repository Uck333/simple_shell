#include "shell_header.h"

/**
 * shell_command_executer - executes the shell prompt
 * @k: shell command to be executed
 *
 * Description: as above and below
 * Return: nothing
 */

void shell_command_executer(char *k)
{
	pid_t my_child_pid = fork();

	if (my_child_pid == -1)
	{
		perror("error from forking");
		exit(-1);
	}
	else if (my_child_pid == 0)
	{
		execlp(shell_command, shell_command, (char *)NULL);
		perror("error from execlp");
		exit(-1);
	}
	else
	{
		wait(NULL);
	}
}
