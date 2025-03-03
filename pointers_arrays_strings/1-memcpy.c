#include "main.h"

/**
* _memcpy - Copies memory area.
*
* @dest: Destination pointer.
* @src: Source pointer.
* @n: Numbers of byte to copy.
*
* Return: dest String.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
