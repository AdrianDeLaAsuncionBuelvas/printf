#include "holberton.h"

/**
 *
 *
g *
 *
 *
 *
 */

int get_functions(char format, va_list list)
{
	int i;

	opc_print form_print[]= {
		{"c", _print_char},
		{"s", _print_str}
	};

	if (format == '\0')
		return (-1);

	if (format == '%')
		return (_putchar('%'));

	for (i = 0; i < 2; i++)
		{
			if (form_print[i].opc[0] == format)
			{
				return (form_print[i].f(list));
			}

	}
	return (_putchar('%') + _putchar(format));
}
