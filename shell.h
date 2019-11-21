#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *_error(char *namefile, char **buf);
int _strlen(char *s);
void _prompt(void);
#endif
