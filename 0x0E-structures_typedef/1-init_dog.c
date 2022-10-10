#include "dog.h"

/**
* init_dog -function initializes variable
* struct dog - new structure
* @d: pointer to struct
* @name: member 1
* @age: member 2
* @owner: member 3
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
