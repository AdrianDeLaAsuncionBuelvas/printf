#ifndef PRINTF_H
#define PRINTF_H
#define BUFFER 1024

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - struct dog
 * @opc: a char
 * @f: funtion
 */

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
int _print_int(va_list list);
int _print_binary(int n);
int _print_intb(va_list list);

#endif
