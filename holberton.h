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

void _print_char(va_list list);
void _print_int(va_list list);
void _print_float(va_list list);
void _print_str(va_list list);
void _puts(char *f)
	

#endif
