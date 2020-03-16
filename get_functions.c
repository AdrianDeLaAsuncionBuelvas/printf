#include "holberton.h"

/**
 *
 *
 *
 *
 *
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list list;
	char *str;

	opc_print form_print[]= {
		{"%c", _print_char},
		{"%s", _print_str},
		{"%%", _print_pj},
		{NULL, NULL}
	};

	va_start(str, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (i < 4)

	}
}
