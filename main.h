#ifndef MAIN_H
#define MAIN_H
#define DELIMETER " \t\n"

extern char **environ;

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

char *read_input(void);
char **str_token(char *input);

/* string functions */
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strdup(const char *str);

void _free(char **arr);
int _exe(char **cmd, char **argv);


#endif
