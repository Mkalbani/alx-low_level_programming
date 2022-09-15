#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: This program will assign a random number
 * to the variable n each time it is executed
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
int n;

srand(time(0));
n = i;

if (n > 0)
	printf("%d is positive\n"
, n);
else if (n == 0)
	printf("%d is zero\n"
, n);
else
	printf("%d is negative\n", n);

return (0);
}
