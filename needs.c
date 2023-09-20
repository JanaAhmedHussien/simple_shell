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
