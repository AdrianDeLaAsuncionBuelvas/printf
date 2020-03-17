#include "holberton.h"

/**
 * _print_char - print Character
 * @list: variadic function
 */

int _print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * _print_str - print String
 * @list: variadic function
 */

int _print_str(va_list list)
{
	char *s;
	int i;

	s = va_arg(list, char *);

	if (!s)
		s = "(null)";

	for (i = 0; (*s + i); i++)
		_putchar((*s + i));

	return (i);
}
