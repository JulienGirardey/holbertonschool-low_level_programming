#include "main.h"
#include <stdio.h>

/**
* _strncpy - Copies a string.
*
* @dest: String destination.
* @src: String source.
* @n: Number source.
*
* Return: dest variable.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
