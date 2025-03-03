#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
*
* @s: String to browse.
* @accept: Byte to count.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	int j = 0;

	int seen[256] = {0};

	unsigned int count = 0;

	unsigned char c;

	while (s[i])
	{
		j = 0;
		c = s[i];
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
			    if (!seen[c])
			    {
			    	seen[c] = 1;
			    	count++;
			    }
			}
			j++;
		}
		i++;
	}
	count++;
	return (count);
}
