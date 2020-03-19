#include "holberton.h"

/**
 * _print_binary - the unsigned int argument is converted to binary
 * @n: get a number
 * Return: ret
 */

int _print_binary(int n)
{
	int resto[BUFFER];
	int count, j;
	int ret;

	j = 0;
	ret = 0;
	count = 0;

	while (n > 0)
	{
		resto[count] = n % 2;
		n /= 2;
		++count;
	}

	for (j = count - 1; j >= 0; --j)
	{
		ret = _putchar(resto[j] + '0');
	}

	return (ret);
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
