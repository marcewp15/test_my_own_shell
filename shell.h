#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *_error(char *namefile, char **buf);
int _strlen(char *s);
void _prompt(void);
char **splitInput(char *array);
void duplicateProcess(char *array, char **space);
void enviromentShell(char **space);
void exitof(char **space, char *array);

#endif
