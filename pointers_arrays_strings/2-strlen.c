#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: String to count
 *
 * Return: Lenght of a string.
 */
int _strlen(char *s)
{
	long int i;

	while (s[i] != '\0')
		i++;
	if (i == 0)
		return (0);
	return (i);
}
