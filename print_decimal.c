#include <stdio.h>
#include "main.h"
/**
* print_decimal - function that print number
* @value: integer
* Return: the number of caractere printed
**/

int print_decimal(int value)
{
int count = 0;

if (value < 0)
{
count += _putchar('-');
value *= -1;
}

if (value / 10)
{
count += print_decimal(value / 10);
}

count += _putchar(value % 10 + '0');

return (count);
}
