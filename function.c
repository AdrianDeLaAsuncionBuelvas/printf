#include "holberton.h"

/**
 * _print_char - print Character
 * @list: variadic function
 */

int _print_char(va_list list)
{
	return (_print_write(va_arg(list, int)));
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
		_print_write((*s + i));

	return (i);
}


/**
 * _print_int - print Integer
 * @list: variadic function
 */

int _print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * _print_float - print float
 * @list: variadic function
 */

int _print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
