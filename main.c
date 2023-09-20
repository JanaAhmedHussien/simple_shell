#include "main.h"
#include <stdio.h>
/**
 * main - our main shell function
 * @ac: arguments count
 * @argv: argument vector
 * Return: 0(success).
 */
int main(int ac, char **argv)
{
char *input = NULL;
int checking = 0;
char **cmd = NULL;
(void) ac;
while (1)
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
cmd = str_token(input);
if (cmd == NULL)
continue;
checking = _exe(cmd, argv);
}
}
