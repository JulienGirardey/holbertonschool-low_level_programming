#include "main.h"

/**
* _strncat - Contatenates two string
* it will use at most n
*
* @dest: String destination.
* @src: String source.
* @n: Number of caraters.
*
* Return: dest variable.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (dest[i])
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
