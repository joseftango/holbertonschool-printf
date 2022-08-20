#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
* _printf - function that produces output according to a format.
* @format: string and format
*Return: the number of caracteres printed
**/

int _printf(const char *format, ...)
{
int i, count = 0;

va_list elem;
va_start(elem, format);

for (i = 0; format[i] != '\0'; )
{
if (format[i] != '%')
{
count += _putchar(format[i]);
i++;
}
else if (format[i] == '%' && format[i + 1] != ' ')
{
i++;
switch (format[i])
{
case 'c':
count += _putchar(va_arg(elem, int));
break;
case 's':
count += past_string(va_arg(elem, char *));
break;
case '%':
count += _putchar('%');
break;
case 'd':
count += print_decimal(va_arg(elem, int));
break;
case 'i':
count += print_decimal(va_arg(elem, int));
break;
case 'b':
count += print_to_binary(va_arg(elem, unsigned int));
break;
case 'u':
count += print_unsigned(va_arg(elem, unsigned int));
break;
case 'o':
count += print_to_octal(va_arg(elem, unsigned int));
break;
case 'x':
count += p_hexa_lower(va_arg(elem, unsigned int));
break;
case 'X':
count += p_hexa_upper(va_arg(elem, unsigned int));
break;
default:
break;
}
i++;
}
}
return (count);
}
