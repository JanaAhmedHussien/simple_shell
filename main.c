#include "main.h"
#include <stdio.h>
/**
 * main - our main shell function
 * Return: 0(success).
 */
int main(void)
{
char *input = NULL;
int checking = 0, j;
char **cmd = NULL;
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
printf("%s", input);
free(input);
cmd = str_token(input);
if (cmd == NULL)
continue;
for (j = 0; cmd[j]; j++)
{
printf("%s\n", cmd[j]);
free(cmd[j]), cmd[j] = NULL;
}
free(cmd), cmd = NULL;
}
}
