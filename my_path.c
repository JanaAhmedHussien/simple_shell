#include "main.h"
/**
 * _path - Handle the PATH.
 * @cmd: my command to get the path
 * Return: path
 */
char *_path(char *cmd)
{
int j;
struct stat status;
struct stat *ptr = &status;
char *environment_pth, *folder, *all_input;
for (j = 0; cmd[j]; j++)
{
if (cmd[j] == '/')
{
if (stat(cmd, ptr) == 0)
return (_strdup(cmd));
return (NULL);
}
}
environment_pth = _env("PATH");
if (!environment_pth)
return (NULL);
folder = strtok(environment_pth, ":");
while (folder)
{
all_input = malloc(1 + _strlen(folder) + _strlen(cmd) + 1);
if (all_input == 1)
{
_strcpy(all_input, folder);
_strcat(all_input, "/");
_strcat(all_input, cmd);
if (stat(all_input, ptr) == 0)
{
free(environment_pth), environment_pth = NULL;
return (all_input);
}
free(all_input), all_input = NULL;
folder = strtok(NULL, ":");
}
}
free(environment_pth), environment_pth = NULL;
return (NULL);
}
