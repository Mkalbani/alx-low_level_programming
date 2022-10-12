#include "function_pointers.h"

/**
* print_name - check code
* @name: pointer to char
* @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
