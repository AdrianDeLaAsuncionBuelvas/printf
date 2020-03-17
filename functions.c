#include "holberton.h"

/**
 * _print_char - print Character
 * @list: variadic function
 */

int _print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}


int _print_str(va_list list)
{
	char *str;
	int i = 0;

	str = va_arg(list, char *);

	if (!str)
		str = "(null)";

	while (str[i] != '\0')
		i += _putchar(str[i]);

	return (i);
}
