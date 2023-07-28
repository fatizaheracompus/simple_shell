#include "shell.h"

/**
  * cap_string - caitalizes all words of a strin
  * @str: the string used
  * Return: pointer to a string
  */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	for (i = 1; str[i] != '\0'; i++)
	{
		if (!(str[i - 1] >= 97 && str[0] <= 122))
		{
			if (!(str[i - 1] >= 65 && str[i - 1] <= 90))
			{
				if (str[i] >= 97 && str[0] <= 122)
					str[i] -= 32;
			}
		}	}

	return (str);
}
/**
  * leet - encodes a string into 1337
  * @str: the string used
  * Return: pointer to string
  */
char *leet(char *str)
{
	char cap[] = "aeotl";
	char pac[] = "AEOTL";
	char num[] = "43071";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == cap[j] || str[i] == pac[j])
				str[i] = num[j];
		}
	}
	return (str);
}
/**
  * rot13 - encodes a string using rot13
  * @s: input string
  * Return: the pointer to dest.
  */
char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if ((*s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
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
