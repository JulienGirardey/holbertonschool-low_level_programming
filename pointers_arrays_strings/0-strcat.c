#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenates two strings
*
* @dest: String destination
* @src: String source
*
* Return: String dest + src.
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
