#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);



typedef struct print
{
	char *opc;
	(*f)();
}opc_print;

#endif
