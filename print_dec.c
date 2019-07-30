#include "holberton.h"
/**
 * print_dec - prints decimals
 * @arg: arguments passed to
 * Return: number of numbers printed
 */
int print_dec(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last = n % 10, digit, num2 = 1, i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
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
