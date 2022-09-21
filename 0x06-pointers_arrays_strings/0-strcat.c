#include "main.h"

/**
 * _strcat - check code
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		
	for (j = 0; j >= 0; j++)
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
	return (dest);
}
