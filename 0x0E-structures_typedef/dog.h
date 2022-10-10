#ifndef FOO_H
#define FOO_H

/**
* struct dog - check code
* @name: first member
* @age: second member
* @owner: 3rd member
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

endif
