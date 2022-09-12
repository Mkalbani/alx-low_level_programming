#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i, a, b;

	for (i = '0'; i <= '9'; i++)
	{
		for (b = a; b <= '9'; b++)
		{
			if (!(i > b || i == b))
			{
				putchar(i);
				putchar(b);
			}
			if (i == '8' && b == '9')
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
