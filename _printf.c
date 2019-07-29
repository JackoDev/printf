#include "holberton.h"
/**
 * _printf - print a format string to std output
 * @format: string to print
 *
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	unsigned int cont = 0, i = 0, j, cont2 = 0;
	va_list valist;
	selec sel[] = {{"c", print_char}, {"s", print_str}, {NULL, NULL}};

	va_start(valist, format);
	if (format == NULL || (_strlen(format) == 1 && *format == '%'))
		return (-1);
	for (; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			for (j = 0; sel[j].f != NULL; j++)
			{
				if (format[i + 1] == sel[j].selector[0])
				{
					cont = cont + sel[j].f(valist);
					i++;
					cont2 = 1;
				}
			}
			if (cont2 == 0)
			{
				_putchar(format[i]);
				cont++;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			cont++;
		}
		else
		{
			_putchar(format[i]);
			cont++;
		}
	}
	va_end(valist);
	return (cont);
}

