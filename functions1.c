#include "holberton.h"

/**
 * _print_binary - function that receives a number for convert
 * @n: variable that receives a number
 * Return: count
 */

int _print_binary(int n)
{
	int count = 0;

	if (n <= 0)
	{
		count += _putchar('0');
		return (count);
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
}
