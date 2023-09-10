#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - entry point
*
*Return: always 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (m > 5)
		printf("last digit of %d is %d  greater than 5 \n ", n, m);
	else if (m == 5)
		printf("last digit of %d is %d  and is zero  \n ", n, m);
	else
		(m < 6 &&  m != 0)
		 printf("last digit of %d is %d  and is less than 6 and not 0 \n ", n, m);
	printf("\n")
	return (0);
}
