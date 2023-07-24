#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

void prompet(char **arr, char **env);
char **spliter_str(char *buff);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
void print_rev(char *s);
void rev_string(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);

#endif
