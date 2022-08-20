#include <stdio.h>
#include "main.h"
/**
*
*
*
**/
int print_to_octal(unsigned int a)
{
int b, c[36]={0}, i, count;
i=0;

while (a != 0)
{
b = a % 8;
a = a / 8;
c[i] = b;
i++;
}
count = i;

for(i = i - 1; i >= 0; i--)
    putchar(c[i] + '0');

return (count);

}
