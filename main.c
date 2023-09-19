#include "main.h"
#include <stdio.h>
/**
 * main - our main shell function
 * @ac: numbering parameters
 * @av: argument vector
 * Return: 0(success).
 */
int main(int ac, char **av)
{
char *input = NULL;
int checking = 0;

while (true)
{
input = read_input();
if (input == NULL)
{
if (isatty(STDIN_FILENO) == 1)
{
write(STDOUT_FILENO, "\n", 1);
}
return (checking);
}
printf("%s", input);
free(input);
}



}
