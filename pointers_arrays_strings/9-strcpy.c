#include "main.h"

/**
* _strcpy - Copies the string pointed
*
* @dest: Destination of string
* @src: String to copie
*
* Return: dest variable.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
