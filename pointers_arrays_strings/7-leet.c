#include "main.h"

/**
* leet - Encodes a string into 1337.
*
* @str: String to encode.
*
* Return: String encoded.
*/
char *leet(char *str)
{
	int i = 0;

	char lookup[128] = {0};

	lookup['a'] = lookup['A'] = '4';
	lookup['e'] = lookup['E'] = '3';
	lookup['o'] = lookup['0'] = '0';
	lookup['t'] = lookup['T'] = '7';
	lookup['l'] = lookup['L'] = '1';
	while (str[i])
	{
		if (lookup[(unsigned char)str[i]])

			str[i] = lookup[(unsigned char)str[i]];

		i++;
	}
	return (str);
}
