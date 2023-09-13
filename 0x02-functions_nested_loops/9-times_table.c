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
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
z = x * y;
if (y == 0)
{
printf("%d, ", z);
}
else
{
printf("%2d", z);
}
if (z != 9)
{
printf(", ");
}
}
}
printf("\n");
}
