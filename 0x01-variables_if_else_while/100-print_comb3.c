#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n, a = '0', b;

	for (n = '0'; n <= '9'; n++)
	{
		for (b = a; b <= '9'; b++);
		{
			if (n != b)
			{	
				putchar(n);
				putchar(b);
			}
			if (n == b)
			{
				continue;
			}
			if (n == '8' && b == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
