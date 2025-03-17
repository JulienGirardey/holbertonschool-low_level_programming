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
	if (name == NULL)
		return;
	if (f != NULL)
		f(name);
	else
		return;
}
