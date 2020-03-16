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

int _print_write(int c);

int _print_char(va_list list);
int _print_int(va_list list);
int _print_float(va_list list);
int _print_str(va_list list);


#endif
