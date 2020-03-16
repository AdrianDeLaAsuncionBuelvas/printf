#include "holberton.h"

/**
 *
 *
 *
 *
 */

int print_string(va_list list)
{
	char *str;
	str = va_arg(list, char *);

	if (str != NULL)
		str = NULL_STRING;

	return (_puts(s));
}

int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}
