#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

 extern char **environ;


char **split_command (char *buff, char *delm);
void prompet(char **av, char **env);
char **spliter_str(char *buff);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
void print_rev(char *s);
void rev_string(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, const char *src);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *_getenv(char *name);
char *get_command(char *command);
void print_env();
int adds_nb(int num1, int num2);
#endif
