#include <stdio.h>


#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>




typedef struct print
{
       char *op;
       void (*f)();
}opc_print;


int _putchar(char c)
{
        return (write(1, &c, 1));
}


/**
 * _print_char - print Character
 * @list: variadic function
 */

void _print_char(va_list list)
{

    _putchar(va_arg(list, int));

}

/**
 * _print_str - print String
 * @list: variadic function
 */

void _print_str(va_list list)
{
      char *s;

        s = va_arg(list, char *);
        while (*s != '\0')
{
_putchar(*s++);
}
}



void _print_porcent()
     {

    _putchar('%');

}
     








/**
 * _print_int - print Integer
 * @list: variadic function
 */
void _print_int(va_list list)
{
        int num = va_arg(list, int);
        unsigned int n;
        int i = 0;
        int j = 1;

        if (num < 0)
        {
                n = num * (-1);
                _putchar('-');
                i++;
        }
        else
        {
                n = num;
        }
        while ((n / j) > 9)
                j *= 10;
        while (j >= 1)
        {
                _putchar(((n / j) % 10) + '0');
                j /= 10;
                i++;
        }
}

/**
void print_number(int n)
{
unsigned int a;

if (n < 0)
{
_putchar('-');
a = -n;
}
else
{
a = n;
}
if (a / 10)
{
print_number(a / 10);
}
_putchar(a % 10 + '0');
}

*/




/**
 * _print_float - print float
 * @list: variadic function
 * 
 */

void _print_float(va_list list)
{
        printf("%f", va_arg(list, double));
}




int _printf(const char *format, ...)
{
        int i, j = 0;
        va_list list;
va_start(list, format);

        opc_print form_print[]= {
                {"c", _print_char},
                        {"s", _print_str},
                        {"d", _print_int},
                        {"i", _print_int},
                        {"%", _print_porcent}
                };

        if (format != NULL)
 {
        for (i = 0; format[i] != 0; i++)
        {
                if (format[i] == '%'  || format[i] == '/')
           {
                    i++;
                    
                 j = 0;
                while (j < 6)
                {

                    if (form_print[j].op[0] == format[i  ])
                    {

                     form_print[j].f(list);
                     break;
                    }
                         j++;
                }
            }
                else
                {
                _putchar(format[i]);

             //       write(1, format+i, 1);
                }

        }

    }
}


int main()
{
     _printf("Negative:[%d]", 7);
     _printf("Length:[%d, %i]\n",54354, -3233);
     _printf("Character:[%c]\n", 'H');
     _printf("String:[%s]\n", "I am a string !");
     _printf("Percent:[%%]\n");
    return 0;
}

