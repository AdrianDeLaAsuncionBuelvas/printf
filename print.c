#include "holberton.h"

void puts(char *f)
{
	int i;
	for (i = 0; f[i] != 0; i++)
	{
		if (f[i] == '%' || f[i] == '/')
		{
			putchar('e');
			continue;
		}
		else
		{
			write(1, f+i, 1);
		}

	}
}




int main()
{
	print("Hello World%");

	return 0;
}
