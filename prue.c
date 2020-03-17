#include <stdio.h>


#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>




typedef struct print
{
       char *op;
       void (*f)();
}opc_print;


/**
 * _print_char - print Character
 * @list: variadic function
 */

void _print_char(va_list list)
{
      printf("%c", va_arg(list, int));
}

/**
 * _print_str - print String
 * @list: variadic function
 */

void _print_str(va_list list)
{
      char *s;

	s = va_arg(list, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);

}


/**
 * _print_int - print Integer
 * @list: variadic function
 */
void _print_int(va_list list)
{
        printf("%d", va_arg(list, int));
}

/**
 * _print_float - print float
 * @list: variadic function
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
	        	{"d", _print_int}
                };

        if (format != NULL)
 {
        for (i = 0; format[i] != 0; i++)
        {
                if (format[i] == '%' || format[i] == '/')
           {
                    i++;
                 j = 0;
                while (j < 4)
                {
                    
                    if (form_print[j].op[0] == format[i  ])
                    {
                               printf("hello");           
                     form_print[j].f(list);
                     break;
                    }
                         j++;  
                }
            }
                else
                {
                    write(1, format+i, 1);
                }
            
        }

    }
}





int main()
{
     _printf("Negative:[%d]", 762534);

    return 0;
}

