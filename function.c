#include "holberton.h"

/**
 * _print_char - print Character
 * @list: variadic function
 */

void _print_char(va_list list)
{
	char bombon;

	bombon = va_arg(list, int);
	printf("%c", bombon);
}

/**
 * _print_int - print Integer
 * @list: variadic function
 */

void _print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * _print_float - print float
 * @list: variadic function
 */

void _print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _print_str - print String
 * @list: variadic function
 */

void _print_str(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	puts(s)
}

