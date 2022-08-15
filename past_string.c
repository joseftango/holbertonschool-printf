#include <stdio.h>
#include "main.h"

/**
* past_string - function that print a string
* @str: string
* Return: number of charactere printed
**/

int past_string(char *str)
{
int c = 0;

for (int j = 0; str[j] != '\0'; j++)
{
c += _putchar(str[j]);
}

return (c);

}
