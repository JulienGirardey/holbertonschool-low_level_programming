#include "main.h"
#include <stddef.h>

/**
* _strpbrk - Searches a string for any of set
* a set of bytes.
*
* @s: String to searche.
* @accept: String to compare.
*
* Return: Pointer of string, if no such byte is found, NULL.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
