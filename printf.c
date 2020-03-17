#include "holberton.h"

/**
 * _printf - function main
 * @format: variadic
 * Return: function
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	int c;
	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		else
		{
			c = get_functions(format[i + 1], list);

			if (c != -1)
			{
				count += c;
				i++;
			}
			else
			{
				return (c);
			}
		}

	}

	va_end(list);
	return (count);
}
