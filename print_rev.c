#include "holberton.h"

/**
 * print_rev - prints string in reverse
 * @valist: valist
 * Return: number of chars printed
 */
int print_rev(va_list valist)
{
	int rev, w, count;
	char *s = va_arg(valist, char *);

	for (rev = 0; s[rev] != '\0'; rev++, count++)
		;
	for (w = rev - 1; w >= 0; w--)
	{
		_putchar(s[w]);
	}
	return (count);

}
