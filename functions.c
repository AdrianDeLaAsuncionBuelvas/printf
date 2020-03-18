#include "holberton.h"

/**
 * _print_char - print Character
 * @list: variadic function
 *  Return: char
 */
int _print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * _print_str- print str
 * @list: variadic function
 * Return: str
 */

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


/**
 * _print_int- print int
 * @list: variadic function
 * Return: str
 */

int _print_int(va_list list)
{

	int num = va_arg(list, int);
	unsigned int n;
	int i = 0;
	int j = 1;

	if (num < 0)
	{
		n = num * (-1);
		_putchar('-');
		i++;
	}
	else
		n = num;

	while ((n / j) > 9)
		j *= 10;
	while (j >= 1)
	{
		_putchar(((n / j) % 10) + '0');
		j /= 10;
		i++;
	}

	return (i);
}
