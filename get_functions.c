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
	int count = 0;

	opc_print form_print[]= {
		{"c", _print_char},
		{"s", _print_str},
		{NULL, NULL}
	};

	for (i = 0; form_print[i].opc != NULL; i++)
		{
			if (format == form_print[i].opc[0])
			{
				count += form_print[i].f(list);
				break;
			}

	}
	return (count);
}
