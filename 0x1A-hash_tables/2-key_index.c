#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key
 * @size: size of array
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = hash_djb2(key) % size;

	return (i);
}
