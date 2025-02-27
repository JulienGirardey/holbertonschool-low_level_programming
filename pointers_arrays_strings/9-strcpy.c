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

	char *original_dest = dest;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (original_dest);
}
