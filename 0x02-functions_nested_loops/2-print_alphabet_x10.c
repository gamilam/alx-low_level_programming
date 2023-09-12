#include "main.h"

/**
* print_alphabet_x10 - function that print alphabet 10x
*
* Return: always 0
*/
void print_alphabet_x10(void)
{
int y;
char i;

for (y = 1; y <= 10; y++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
