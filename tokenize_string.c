#include "main.h"
/**
 * str_token - tokenizer for my string.
 * @input: my input to the shell
 * Return: tokenizered string
 */
char **str_token(char *input)
{
char *tok = NULL, *temporary = NULL, **cmd = NULL
int ctr = 0, j = 0;
if (!input)
return (NULL);
temporary = _strdup(input);
tok = strtok(temporary, DELIMETER);
if (tok == NULL)
{
free(temporary), temporary = NULL;
free(input), input = NULL;
return (NULL);
}
while (tok)
{
ctr++;
tok = strtok(NULL, DELIMETER);
}
free(temporary);
temporary = NULL;
cmd = malloc(sizeof(char *) * (ctr + 1));
if (!cmd)
{
free(input), input = NULL;
return (NULL);
}
tok = strtok(input, DELIMETER);
while (tok)
{
cmd[j] = _strdup(tok);
tok = strtok(NULL, DELIMETER);
j++;
}
free(input), input = NULL;
cmd[j] = NULL;
return (cmd);
}
