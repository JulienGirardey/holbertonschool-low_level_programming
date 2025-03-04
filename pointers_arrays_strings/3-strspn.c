#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
*
* @s: String to browse.
* @accept: Byte to count.
*
* Return: Counter.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	unsigned int count = 0;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == *s)
			{
				count++;
				break;
			}
			i++;
		}
		if (accept[i] == '\0')
			return (count);
		s++;
	}
	return (count);
}
