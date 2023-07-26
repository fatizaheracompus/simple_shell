#include "shell.h"

#define MAX_COMMANDE 20
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
	char *buff = NULL, *cmd;
	size_t buff_size = 0;
	int nb_char = 0;
	int i = 0;
	pid_t pid;
	int status = 0;
<<<<<<< HEAD
	char *args[MAX_COMMANDE];
	int k = 0

while (1)
{
if (isatty(STDIN_FILENO))
write(1, "cisfun$ ", 8);
nb_char = getline(&buff, &buff_size, stdin);
args[k] = malloc(sizeof(char *) * 1024);
if (nb_char == EOF)
	{
	free(buff);
		exit(EXIT_FAILURE);
	}
	while(buff[i] != 0)
	{
		i++;
	 if (buff[i] == '\n')
		 buff[i] = 0;
	}
args[k] = strtok(buff, " \t\n");
		while (args[k] != 0)
=======
	char **args;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "cisfun$ ", 8);
		nb_char = getline(&buff, &buff_size, stdin);
		if (nb_char == EOF)
		{
			free(buff);
			exit(EXIT_FAILURE);
		}
		while(buff[i] != 0)
>>>>>>> 9ba7b4fce13c14de94a788e4e4a8e2dc8d1297a0
		{
			args[++k] = strtok(NULL, " \t\n");	
		}
<<<<<<< HEAD
		pid = fork();
=======
		args = split_command(buff, " \t\n");
		if (_strcmp(args[0], "exit") == 0)
			exit(0);
		cmd = get_command(args[0]);
		if (!cmd)
		{
			printf("Command not found\n");
			continue;
		}
		else
			pid = fork();
>>>>>>> 9ba7b4fce13c14de94a788e4e4a8e2dc8d1297a0
		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		if (pid == 0)
		{
			_env(args[0]);
			if (execve(cmd, args, env) == -1)
				printf("%s: No such file or directory\n", av[0]);
		}
		else
			wait(&status);
<<<<<<< HEAD
		k = 0;
		free(args[k]);
}
=======
		free(cmd);

	}
	free(buff);
>>>>>>> 9ba7b4fce13c14de94a788e4e4a8e2dc8d1297a0
}
