#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int (*get_op_func(char *s))(va_list, char);
int _putchar(char);
int _strlen(const char *s);
void _puts(char *s);
void _atoi(char *s);
char *rot13(char *str);
void print_rev(char *s);

int print_char(va_list);
int print_str(va_list);
void print_dec(va_list);
void print_int(va_list);
void to_binary(va_list);
void print_unsigned_int(va_list);
void print_unsigned_octal(va_list);
void print_hexa(va_list);
void print_hexaupper(va_list);
void rem_japanese(va_list);
void print_address(va_list);
void print_long(va_list);
void print_short(va_list);


/**
 *struct selector - selects the appropiate function
 *to perform based on the format
 *@selector: pointer to type of format
 *@f: pointer to function to print format
 */
typedef struct selector
{
	char *selector;
	int (*f)(va_list);
} selec;

#endif
