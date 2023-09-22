#include "main.h"
/**
 * _out - exits the shell.
 * @cmd: the command that i enter to the shell.
 * @argv: argument vector.
 * @checking: to chech the status of the command.
 * @i: index.
 */
void _out(char **cmd, char **argv, int *checking, int i)
{
int val = (*checking);
char *j;
char output[] = ":exit: wrong command: ";
if (cmd[1])
{
if (_pos(cmd[1]))
{
val = _atoi(cmd[1]);
}
else
{
j = _itoa(i);
write(STDERR_FILENO, argv[0], _strlen(argv[0]));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, j, _strlen(j));
write(STDERR_FILENO, output, _strlen(output));
write(STDERR_FILENO, cmd[1], _strlen(cmd[1]));
write(STDERR_FILENO, "\n", 1);
free(j), j = NULL;
_free(cmd);
(*checking) = 2;
return;
}
}
_free(cmd);
exit(val);
}
