#include "main.h"
/**
 * _free - function frees 2D array
 * @arr: the array that will be free
 *
 * Return: No return here
 */
void _free(char **arr)
{
	int i;

	if (!arr)
		return;
	for (i = 0; arr[i]; i++)
	{
		free(arr[i]);
		arr[i] = NULL;
	}
	free(arr), arr = NULL;
}

/**
 * *_itoa - function converts integer to string
 * @i: the integer value
 *
 * Return: the value of the function
 */
char *_itoa(int i)
{
	char buf[20];
	int a = 0;

	if (i == 0)
		buf[a++] = '0';
	else
	{
		while (i > 0)
		{
			buf[a++] = (i % 10) + '0';
			i /= 10;
		}
	}
	buf[a] = '\0';
	_strrev(buf, a);

	return (_strdup(buf));
}

/**
 * _perror - function print error massage
 * @name: the name
 * @input: the command that will be input
 * @in: the index
 *
 * Return: no return here
 */
void _perror(char *name, char *input, int in)
{
	char *idx;
	char output[] = ": not found\n";

	idx = _itoa(in);

	write(STDERR_FILENO, name, _strlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, idx, _strlen(idx));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, input, _strlen(input));
	write(STDERR_FILENO, output, _strlen(output));

	free(idx), idx = NULL;
}


/**
 * _strrev - function that reverses a string
 * @s: the string
 * @lenth: the lenth of the string
 *
 * Return: no return here
 */
void _strrev(char *s, int lenth)
{
	char cpy;
	int first = 0;
	int last = lenth - 1;

	while (first < last)
	{
		cpy = s[first];
		s[first] = s[last];
		s[last] = cpy;
		first++;
		last--;
	}
}
