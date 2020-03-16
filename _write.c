#include "holberton.h"

/**
 * _print_write - function by used in the prints
 * @c: because it will return a character stored in buffer
 * Return: the printf with funtion write.
 */

int _print_write(int c)
{
	return (write(1, &c, 1));
}
