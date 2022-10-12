#include "dog.h"

/**
* init_dog -function initializes variable
* @d: pointer to struct
* @name: member 1
* @age: member 2
* @owner: member 3
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
