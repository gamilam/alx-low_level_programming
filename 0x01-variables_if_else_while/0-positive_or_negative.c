#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
*main - entry point
*
*description positive or negative
*
*return : 0 (success)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive\n", n);
else if (n == 0)
printf("%i is zero \n", n);
else
printf("%i is positive\n", n);
return (0);
}
