#include "main.h"
/**
 * _exe - function that execute command
 * @cmd: the command that will be execute
 * @argv: array of string of arguments
 *
 * Return: the status
 */
int _exe(char **cmd, char **argv)
{
	pid_t child;
	int checking;
	int *pointer = &checking;

	child = fork();
	if (child == 0)
	{
		if (execve(cmd[0], cmd, environ) == -1)
		{
			perror(argv[0]);
			_free(cmd);
			exit(127);
		}
	}
	else
	{
		waitpid(child, pointer, 0);
		_free(cmd);
	}
	return (WEXITSTATUS(checking));
}
