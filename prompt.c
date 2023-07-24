#include "shell.h"

#define MAX_COMMAND 20
/**
 * prompet - function that prompt a command line
 * @arr: arg vectorail
 * @env: array of string null
 *
 * Return: void
 */

void prompet(char **av, char **env)
{
	char *buff = NULL;
	size_t buff_size = 0;
	int nb_char = 0;
	int i = 0;
	pid_t pid;
	int status = 0;
	char *args[MAX_COMMAND];
	int j = 0;



while (1)
{
	if (isatty(STDIN_FILENO))

	write(1, "cisfun$ ", 8);

	nb_char = getline(&buff, &buff_size, stdin);
	args[j]= malloc(sizeof(char *) * 1024);


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

	airgs[j] = strtok(buff, " \t\n");
	while (args[j] != 0)
	{

	args[++j] = strtok(NULL, " \t\n");
	
	
	}


	
pid = fork();
if (pid == -1)
{
	perror("fork");
	exit(EXIT_FAILURE);
}
if (pid == 0)
{
	if (execve(args[0], args, env) == -1)
		printf("%s: No such file or directory\n", av[0]);
}
else
wait(&status);
j = 0;
free(args[j]);
}
}


