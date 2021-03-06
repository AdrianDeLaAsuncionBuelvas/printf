#include "holberton.h"

/**
 * get_functions- look for the function
 * @format: type
 * @list: variadic
 * Return: function
 */

int get_functions(char format, va_list list)
{
	int i;

	opc_print form_print[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"d", _print_int},
		{"i", _print_int},
		{"b", _print_binary}
	};

	if (format == '\0')
		return (-1);

	if (format == '%')
		return (_putchar('%'));

	for (i = 0; i < 5; i++)
	{
		if (form_print[i].opc[0] == format)
		{
			return (form_print[i].f(list));
		}
	}
	return (_putchar('%') + _putchar(format));
}
