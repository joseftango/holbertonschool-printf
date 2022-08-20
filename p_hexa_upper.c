#include <stdio.h>
#include "main.h"
/**
* p_hexa_upper - function that print decimal to hexadecimal
* @decimal: integer
* Return: the number of charactere printed
**/

int p_hexa_upper(unsigned int decimal)
{
char reversed_digits[20];
int i, remain, count = 0;

while (decimal > 0)
{
remain = decimal % 16;

if (remain < 10)
reversed_digits[i] = '0' + remain;
else
reversed_digits[i] = 'A' + remain - 10;

decimal = decimal / 16;
i++;

}

i = i - 1;

while (i >= 0)
{
count += _putchar(reversed_digits[i]);
i--;
}

return (count);
}
