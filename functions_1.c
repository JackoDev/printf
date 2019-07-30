#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: the pointer to a first integer
 * Return: the length of a string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * p_c - prints a character
 * @valist: format to print
 * Return: number of char printed
 */
int print_char(va_list valist)
{
	char s;

	s = va_arg(valist, int);
	_putchar(s);
	return (1);
}
/**
 * p_st - prints strings
 * @valist: format to print
 * Return: number of char printed
 */
int print_str(va_list valist)
{
	char *s;
	int i = 0;

	s = va_arg(valist, char*);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

