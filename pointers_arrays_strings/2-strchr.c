#include "main.h"
#include <stddef.h>

/**
* _strchr - Locates a character in a string.
*
* @s: String to browse.
* @c: Charater to find.
*
* Return: Pointer to the first occurence of character in a string,
* or NULL if it not found.
*/
char *_strchr(char *s, char c)
{
	while (*s != c)
		s++;
	if (*s == '\0')
		return (NULL);
	return (s);
}
