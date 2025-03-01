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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
