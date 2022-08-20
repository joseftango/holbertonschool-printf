#include <stdio.h>
#include "main.h"
/**
* print_unsigned - function that print only positive number
* @value: integer
* Return: the number of caractere printed
**/

int print_unsigned(unsigned int value)
{
unsigned int count = 0;

if (value / 10)
{
count += print_unsigned(value / 10);
}

count += _putchar(value % 10 + '0');

return (count);
}
