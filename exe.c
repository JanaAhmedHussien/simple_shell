#include "main.h"
/**
 * _exe - function that execute command
 * @cmd: the command that will be execute
 * @argv: array of string of arguments
 * @in: the index
 *
 * Return: the status
 */
int _exe(char **cmd, char **argv, int in)
{
	char *all_input;
	pid_t child;
	int checking;
	int *pointer = &checking;

	all_input = _path(cmd[0]);
	if (!all_input)
	{
		_perror(argv[0], cmd[0], in);
		_free(cmd);
		return (127);
	}

	child = fork();
	if (child == 0)
	{
		if (execve(all_input, cmd, environ) == -1)
		{
			free(all_input), all_input = NULL;
			_free(cmd);
		}
	}
	else
	{
		waitpid(child, pointer, 0);
		_free(cmd);
		free(all_input), all_input = NULL;
	}
	return (WEXITSTATUS(checking));
}
