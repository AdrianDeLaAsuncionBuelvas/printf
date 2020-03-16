#include "holberton.h"
<<<<<<< HEAD

void _printf(char *format, ...)
=======
int _printf(const char *format, ...)
>>>>>>> 95e733b6a12de111de40600f2177e551254bb5f9
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
