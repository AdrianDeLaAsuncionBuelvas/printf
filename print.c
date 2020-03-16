#include "holberton.h"

void _printf(char *format, ...)
{
	int i, count = 0;
	va_list list;

	va_start(list, format);

	if (format != NULL)
	{
	for (i = 0; f[i] != 0; i++)
	{
		if (f[i] == '%' || f[i] == '/')
		{
			putchar('e');
			continue;
		}
		else
		{
			_print_write(1, f+i, 1);
		}

	}
	
	}
}
