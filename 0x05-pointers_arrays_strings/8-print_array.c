#include "main.h"
#include <stdio.h>

/**
 * print_array - checl code.
 * @a: array.
 * @n: elements
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
