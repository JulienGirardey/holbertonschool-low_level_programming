#include "main.h"

/**
* _strlen_recursion - That returns the length of a string.
*
* @s: String to count.
*
* Return: The number of characters in the string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
