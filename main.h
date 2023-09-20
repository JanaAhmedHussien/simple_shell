#ifndef MAIN_H
#define MAIN_H
#define DELIMETER " \t\n"
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

#endif
