#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


typedef struct print
{
	char *opc;
	int (*f)(va_list);
} opc_print;

int _putchar(char c);
int _printf(const char *format, ...);
int get_functions(char format, va_list list);
int _print_char(va_list list);
int _print_str(va_list list);
/*
int _print_int(va_list list);
int _print_float(va_list list);
*/

#endif
