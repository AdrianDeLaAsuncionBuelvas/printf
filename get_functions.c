#include "holberton.h"

/**
 *
 *
 *
 *
 *
 *
 */

int get_functions(char format, va_list list)
{
	unsigned int i, j;
	int count = 0;
	char *str;

	opc_print form_print[]= {
		{"c", _print_char},
		{"s", _print_str}
		{NULL, NULL}
	};

	va_start(str, format);
	i = 0;

	for (format != NULL && format[i] != '\0')
	{
		j = 0;

		for (j = 0; form_print[j].opc != '\0'; j++)
		{
			if (format[i] == form_print[j].opc[0])
			{
				count += form_print[j].f(list);
				break;
			}
		}

	}
	va_end(list);
	return (count);
}
