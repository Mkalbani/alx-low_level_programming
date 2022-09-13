#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = 0; b <= '9'; b++)
		{
			if (!(a > b || a == b))
			{
				putchar(a);
				putchar(b);
			}
			if (a == '8' && b == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
