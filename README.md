# Project Printf

## Authorized functions and macros

    write (man 2 write)
    malloc (man 3 malloc)
    free (man 3 free)
    va_start (man 3 va_start)
    va_end (man 3 va_end)
    va_copy (man 3 va_copy)
    va_arg (man 3 va_arg)

## files
### _putchar.c
in this fiile threre is a function for print character
### functions.c
int _print_int (int num) print number and return length. <br/>
int _print_char (va_list list) print character and return (_putchar (va_arg (list, int))); <br/>
int _print_str (va_list list) print string and return lentgth. <br/>

### functions1.c
_print_binary - function that receives a number for convert to binary. <br/>

### get_functions.c
get_functions (char format, va_list list) - look for the function. <br/>

### holberton.h
it has the prototypes of the functions and the structure. <br/>

### man_3_printf
man page _print.

### printf.c
int _printf (const char * format, ...) receives the arguments and calls the functions.
