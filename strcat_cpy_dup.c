#include "main.h"
/**
 *_strcat - concatenates  the string  @src with @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	while (src[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}

	return (dest);
}

/**
 * _strcpy - A function that copies the string pointed to src to dest
 * @dest: destination
 * @src: source
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	char *newstr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= len;
	newstr = malloc(sizeof(char) * (len + 1));

	if (!newstr)
		return (NULL);
	for (i = 0; i <= len; i++)
		newstr[i] = str[i];
	return (newstr);
}
