#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = 0; b <= '9'; b++)
		{
			if (!(a > b && a == b))
			{
				putchar(a);
				putchar(b);
			}
			if (a == '8' && b == '9')
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
