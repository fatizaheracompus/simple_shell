#include "shell.h"
/**
  * _getenv - gets an envirnment variable
  * @name: name of the var
  *
  * Return: pointer to the var
  */
char *_getenv(char *name)
{
	extern char **environ;
	int i;
	char *token = NULL;

	while (environ[i])
	{
		token = strtok(environ[i], "=");
		if (_strcmp(token, name) == 0)
			return (strtok(NULL, "\n"));
		i++;
	}
	return (NULL);
}
/**
  * get_command - gets the full command path to execute it
  * @command: the command that will be searched
  *
  * Return: string of the command if found
  * NULL if not found
  */
char *get_command(char *command)
{
	char *file_path = _getenv("PATH");
	char *token = NULL;
	char *full_command;
	struct stat st;
	
	token = strtok(file_path, ":");
	while (token)
	{
		full_command = malloc(_strlen(token) + _strlen(command) + 2);
		_strcpy(full_command, token);
		_strcat(full_command, "/");
		_strcat(full_command, command);
		if (stat(full_command, &st) == 0)
			return (full_command);
		free(full_command);
		token = strtok(NULL, ":");
	}
	return (NULL);
}
/**
  * print_env - prints env variables
  *
  * Return: void
  */
void print_env()
{
	extern char **environ;
	int i = 0;

	while (environ[i])
	{
		_puts(environ[i]);
		i++;
	}
}
