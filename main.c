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
int checking = 0, i = 0;
int *ptr = &checking;
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
i++;
cmd = str_token(input);
if (cmd == NULL)
continue;
if (is_pre_fun(cmd[0]))
h_pre_fun(cmd, argv, ptr, i);
else
checking = _exe(cmd, argv, i);
}
}
