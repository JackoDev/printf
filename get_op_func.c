#include "holberton.h"

/**
 *get_op_func - selects the function to be used by _printf
 *@s: pointer to struct
 *Return: pointer to function
 */
int (*get_op_func(char *s))(const char *format, ...)
{

	selec sel[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_int},
		{"b", to_binary},
		{"u", print_unsigned_int},
		{"o", print_unsigned_octal},
		{"x", print_hexa},
		{"X", print_hexaupper},
		{"S", rem_japanese},
		{"p", print_address},
		{"l", print_long},
		{"h", print_short},
		{"r", print_rev},
		{"R", print_rot13},
		{"%", print_perc};
		{NULL, NULL}
	};
	va_list valist;
	int i = 0;

	while (i != NULL)
	{
		if (*s == *(sel[i].selector))
			return (*(sel[i]).f);
		i++
			}
	return (NULL);
}
