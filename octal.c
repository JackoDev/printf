#include "holberton.h"

/**
 * print_octal - convert decimal to octal
 *@valist: unsigned int passed to function
 *Return: number of characters printed
 */
int print_octal(va_list valist)
{
	int count = 0, rev;
	unsigned int binum[1024];
	unsigned int n = va_arg(valist, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		binum[count] = n % 8;
		n = n / 8;
		count++;
	}
	for (rev = count - 1; rev >= 0; rev--)
		_putchar(binum[rev] + '0');

	return (count);
}
