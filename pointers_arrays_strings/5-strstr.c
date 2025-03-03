#include "main.h"
#include <stddef.h>
/**
* _strstr - Locates a substring.
*
* @haystack: String where search.
* @needle: String to find.
*
* Return: The word find, if we don't find the word
* return NULL.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		i = 0;
		while (needle[i] && haystack[i] == needle[i])
			i++;
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
