#include "main.h"
/**
* print_last_digit - function
* *@y: parameter
* Return: always 0
*/
int print_last_digit(int y)
{
int z;

z = y % 10;
if (y < 0)
{
z = -z;
}
_putchar(z + '0');
return (z);
}
