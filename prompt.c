#include "shell.h"

#define MAX_COMMAND 20
/**
  * _env - print enviormnet var
  * @str: takes argument
  *
  * Return: void
  */
void _env(char *str)
{
	if (_strcmp(str, "env") == 0)
	{
		print_env();
		exit(0);
	}
}
/**
 * prompet - function that prompt a command line
 * @av: arg vectorail
 * @env: array of string null
 *
 * Return: void
 */

void prompet(char **av, char **env)
{
	char *buff = NULL, *cmd = NULL; size_t buff_size = 0;
	int nb_char = 0, status = 0;  pid_t pid;  char **args;

	while (1)
{
	if (isatty(STDIN_FILENO))
	{
		write(1, "cisfun$ ", 8);
		nb_char = getline(&buff, &buff_size, stdin);
		if (nb_char == EOF)
		{
			free(buff);
			exit(EXIT_FAILURE);
		}
		args = split_command(buff, " \t\n");
		if (strcmp(args[0], "exit") == 0)
			exit(0);
		pid = fork();
		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		if (pid == 0)
		{
			_env(args[0]);
			cmd = get_command(args[0]);
			if (cmd != 0)
				execve(cmd, args, env);
			else
				printf("%s: command not found\n", av[0]);
			exit(0);
		}
		else
		{
			wait(&status);
		free(cmd);
		}
	}
}
}
