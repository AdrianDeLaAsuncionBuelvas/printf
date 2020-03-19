#include "holberton.h"

/**
 * _print_intb - the unsigned int argument is converted to binary
 * @list: variadic funtions
 * Return: list
 */

int _print_intb(va_list list)
{
	int resto[BUFFER];
	int count, j = 0;
	int ret = 0;

	count = 0;
	int n = va_arg(list, int);

	while (n > 0)
	{
		resto[count] = n % 2;
		n /= 2;
		++count;
	}
	j = count - 1;
	while (j >= 0)
	{
		ret = _putchar(resto[j] + '0');
		--j;
	}

	return (ret);
}
