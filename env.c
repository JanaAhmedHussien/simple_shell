#include "main.h"
/**
 * _env - function that gett the environment
 * @var: environment variable name
 *
 * Return: env if it is equl 0 else Null
 */
char *_env(char *var)
{
	int a;
	char *cpy, *key, *val, *environment;

	for (a = 0; environ[a]; a++)
	{
		cpy = _strdup(environ[a]);
		key = strtok(cpy, "=");
		if (_strcmp(key, var) == 0)
		{
			val = strtok(NULL, "\n");
			environment = _strdup(val);
			free(cpy);
			return (environment);
		}
		free(cpy), cpy = NULL;
	}
	return (NULL);
}

/**
 * _penv - function that print the environment
 * @cmd: command variable name
 * @checking: the status
 *
 * Return: no return here
 */
void _penv(char **cmd, int *checking)
{
	int a;

	for (a = 0; environ[a]; a++)
	{
		write(STDOUT_FILENO, environ[a], _strlen(environ[a]));
		write(STDOUT_FILENO, "\n", 1);
	}
	_free(cmd);
	(*checking) = 0;
}
