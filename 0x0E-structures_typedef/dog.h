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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
