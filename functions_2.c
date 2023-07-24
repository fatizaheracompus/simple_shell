#include "shell.h"
/**
  * _strcat - concatenate two strings
  * @dest: first string
  * @src: second string
  * Return: pointer to first string after appending
  */
char *_strcat(char *dest, char *src)
{
	int d_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		d_len++;
	}
	for (i = 0; src[i] != '\0'; i++)
		dest[d_len + i] = src[i];
	dest[d_len + i] = '\0';
	return (dest);
}
/**
  *_strncat - concatenates 2 strings using at most n bytes from 2nd string
  * @dest: the first string
  * @src: the second string
  * @n: the maximum number of bytes
  * Return: poitner to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int d_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		d_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[d_len + i] = src[i];
	dest[d_len + 1] = '\0';

	return (dest);
}
/**
  * _strncpy - copies a string with maximum bytes
  * @dest: 1st string
  * @src: the string to be copied
  * @n: the maximum number of bytes to be copied
  * Return: pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
/**
  * _strcmp - compares two strings
  * @s1: string 1
  * @s2: string 2
  * Return: integer to which is greater
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}
/**
  * string_toupper - changes all lowercase letters to uppercase
  * @str: string used
  * Return: pointer to that string
  */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
