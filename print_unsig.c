#include "holberton.h"
/**
 * print_unsig - prints unsigned int
 * @arg: arguments passed to
 * Return: number of numbers printed
 */
int print_unsig(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int num, last = n % 10, digit, num2 = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			num2 = num2 * 10;
			num = num / 10;
		}
		num = n;
		while (num2 > 0)
		{
			digit = num / num2;
			_putchar(digit + '0');
			num = num - (digit * num2);
			num2 = num2 / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
