#include "main.h"
/**
 * reverse_array - reverses array
 * @a: array.
 * @n: number of elements of the array.
 */

void reverse_array(int *a, int n)
{
    int i;
    
    for (i = n; i >= 0; i--)
       printf("%d ", a[i]);
}
