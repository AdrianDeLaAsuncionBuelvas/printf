#include "holberton.h"

/**
 * _print_binary - the unsigned int argument is converted to binary
 * @n: get a number
 * Return: ret
 */

int _print_binary(int n)
{
int count  = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n / 2)
	{
		count += _print_binary(n / 2);
		count += _putchar((n % 2) + '0');
	}
	else
	{
		count += _putchar(n + '0');
	}
	return (count);
}

/**
 * _print_intb - the unsigned int argument is converted to binary
 * @list: variadic funtions
 * Return: list
 */

int _print_intb(va_list list)
{
	return (_print_binary(va_arg(list, int)));
	va_end(list);
}
