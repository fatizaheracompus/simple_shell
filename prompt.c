#include "shell.h"

/**
 * spliter_str - split the string on one word
 * @buff: string to be split
 *
 * Return: return a char
 */
char **spliter_str(char *buff)
{
	char *wrd = NULL;
	char **arr = NULL;
	int i = 0;

wrd = strtok(buff, " /t/n");
while (wrd != 0)
{
arr = realloc(arr, i * sizeof(char *));
arr[i - 1] = wrd;
i++;
wrd = strtok(NULL, " /t/n");
}
wrd = strtok(NULL, "/t/n");
if (wrd == NULL)
{
perror("realloc");
exit(EXIT_FAILURE);
}
	for (i = 0; arr[i]; i++)
	{
		printf("%s\n", arr[i]);
	}
	return (arr);
}

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
	char *args[] = {NULL, NULL};




while (1)
{
	write(1, "cisfun$ ", 8);
	nb_char = getline(&buff, &buff_size, stdin);
	args[0] = buff;

	if (nb_char == -1)
	{
	free(buff);
		exit(EXIT_FAILURE);
	}
	while(buff[i] != 0)
	{
	
	 if (buff[i] == '\n')
		 buff[i] = 0;
	 i++;
	}
pid = fork();
if (pid == -1)
{
	free(buff);
	exit(EXIT_FAILURE);
}
if (pid == 0)
{
	if (execve(args[0], args, env) == -1)
		printf("%s: No such file or directory\n", av[0]);
	else
	wait(&status);
}
}
exit(EXIT_SUCCESS);
}
