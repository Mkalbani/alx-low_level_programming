#include "main.h"
#include <stdlib.h>

/**
 * create_array - program creates array
 * @size: size
 * @c: character
 * Return: 0 if succesfull, otherwise return pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (0);

	str = malloc(sizeof(c) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
