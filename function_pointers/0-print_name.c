#include "function_pointers.h"
#include <stddef.h>

/**
* print_name - That print a name.
*
* @name: Name of the person.
* @f: Void function.
*
* Return: Always void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
