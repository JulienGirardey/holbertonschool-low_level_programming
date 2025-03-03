#include "main.h"

/**
* _memset - Fills memory with a constant byte.
*
* @n: First n byte.
* @s: String to return.
* @b: Constant byte.
*
* Return: Variable s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
