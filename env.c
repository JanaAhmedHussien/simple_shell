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
