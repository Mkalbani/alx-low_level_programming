#include "function_pointers.h"

/**
* array_iterator - executes a function on each element of an array
* @array: array to be targeted
* @size: size of array
* @action: function to be executed
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
