#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

void prompet(char **arr, char **env);
char **spliter_str(char *buff);

#endif
