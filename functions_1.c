#include "shell.h"
/**
  * _strlen - compute the length of the string
  * @s: Pointer to the string
  * Return: length of the string
  */
int _strlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}
/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: On sucess 1
  * on error -1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
  * _puts - prints a string followed by a new line
  * @str: pointer to a string
  * Return: void
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
  * print_rev - prints a string in revers order
  * @s: pointer to string
  * Return: void
  */
void print_rev(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	while (cnt > 0)
	{
		s--;
		_putchar(*s);
		cnt--;
	}
	_putchar('\n');
}
/**
  * rev_string - reverse a string
  * @s: pointer to string
  * Return: void
  */
void rev_string(char *s)
{
	int cnt = 0;
	char *str = "";

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	while (cnt > 0)
	{
		s--;
		*str = *s;
		cnt--;
	}
	s = str;
}
