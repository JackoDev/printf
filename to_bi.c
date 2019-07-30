#include "holberton.h"

/**
 *to_binary- convert decimal to binary
 *@valist: unsigned int passed to function
 *Return: number of characters printed
 */
int to_binary(va_list valist)
{
	int count = 0, rev;
	unsigned int binum[32];
	unsigned int n = va_arg(valist, unsigned int);

	while (n > 0)
	{
		binum[count] = n % 2;
		n = n / 2;
		count++;
	}
	for (rev = count - 1; rev >= 0; rev--)
		_putchar(binum[rev] + '0');

	return (count);
}
