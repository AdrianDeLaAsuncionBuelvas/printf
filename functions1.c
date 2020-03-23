#include "holberton.h"

/**
 * _print_intb - the unsigned int argument is converted to binary
 * @num: numbers to convert
 * Return: numbers converter
 */

int _print_intb(int num)
{
	unsigned int count = 0;

	if (num < 0)

		return (-1);

	if (num / 2)
	{
		count += _print_intb(num / 2);
		count += _putchar((num % 2) + '0');
	}
	else
	{
		count += _putchar(num + '0');
	}

	return (count);
}

/**
 * _print_binary - the unsigned int argument is converted to binary
 * @list: variadic funtions
 * Return: list
 */

int _print_binary(va_list list)
{
	return (_print_intb(va_arg(list, unsigned int)));
}
