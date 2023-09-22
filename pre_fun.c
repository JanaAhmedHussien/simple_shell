#include "main.h"
/**
 * is_pre_fun - function checks if the command is built-in command
 * @cmd: the command, the user input
 *
 * Return: 1 if it is builtin function else 0
 */
int is_pre_fun(char *cmd)
{
	char pre_funs[] = {"exit", "env", "setenv",
		"cd", NULL};
	int a;

	for (a = 0; pre_funs[a]; a++)
	{
		if (_strcmp(cmd, pre_funs[a]) == 0)
			return (1);
	}
	return (0);
}

/**
 * h_pre_fun - function handls the built-in command
 * @cmd: the command, the user input
 * @argv: array of strings of argument
 * @checking: the status
 * @in: the index
 *
 * Return: no return here
 */
void h_pre_fun(char **cmd, char **argv, int *checking, int in)
{
	if (_strcmp(cmd[0], "exit") == 0)
		_out(cmd, argv, checking, in);
	else if (_strcmp(cmd[0], "env") == 0)
		_penv(cmd, checking);
}
