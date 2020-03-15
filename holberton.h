#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
void _puts(char *str);


typedef struct print
{
	char *opc;
	(*f)();
}opc_print;

#endif
