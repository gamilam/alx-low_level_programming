#include "main.h"
#include <stdio.h>
/**
* times_table - function
*
* Return: void
*/
void times_table(void)
{
int x, z, y;

for (x = 0; x <= 9; x++)
{
_putchar('0');
for (y = 1; y <= 9; y++)
{
_putchar(',');
_putchar(' ');
z = x * y;
if (z <= 9)
{
_putchar(' ');
}
else
{
_putchar((z / 10) + '0');
}
_putchar((z % 10) + '0');
}
_putchar('\n');
}
}
