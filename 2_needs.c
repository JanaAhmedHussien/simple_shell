#include "main.h"
/**
 * _pos - check if the number is positive or not.
 * @s: the string passed to check it.
 * Return: 1 if positive 0 otherwise.
 */
int _pos(char *s)
{
int j;
if (s == NULL)
return (0);
for (j = 0; s[j]; j++)
{
if (s[j] < '0' || s[j] > '9')
return (0);
}
return (1);
}
/**
 * _atoi - converting from string to int.
 * @s: string passed to check it.
 * Return: int number.
 */
int _atoi(char *s)
{
int j;
int n = 0;
for (j = 0; s[j]; j++)
{
n *= 10;
n += (s[j] - '0');
}
return (n);
}
