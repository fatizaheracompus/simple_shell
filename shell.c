#include "shell.h"


/**
 * main - function execute my own shell
 * @ac: argument counter
 * @av: argument vectorial
 * @env: is a null terminated array of string.
 *
 * Return: return 0.
 */

int main(int ac, char **av, char **env)
{
	if (ac == 1)
	{
		 prompet(av, env);
	}
	return (0);
}
