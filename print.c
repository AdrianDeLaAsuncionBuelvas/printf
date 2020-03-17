#include "holberton.h"

/**
 * _printf - function main
 *
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list list;

	va_start(list, format);

	if (format != NULL)
	{
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		switch (format[++i])
		{
		case '%':
			count += _putchar('%');
			break;
		case 'c':
		case 's':
			count += get_functions(format[i], list);
			break;
		default:
			if (!format[i])
				return(-1);

			count += _putchar('%');
			count += _putchar(format[i]);
			break;
		}

	}

	}

	va_end(list);
	return (count);
}
