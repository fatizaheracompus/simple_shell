#include "shell.h"

/**
  * _strcpy - copies a string
  * @dest: 1st string
  * @src: the string to be copied
  *
  * Return: pointer to dest
  */
char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
