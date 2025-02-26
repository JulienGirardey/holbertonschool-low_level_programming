#include "main.h"

/**
 * _strlent - Return the length of a string
 *
 * @s: String to count
 *
 * Return: Lenght of a string.
 */
int _strlen(char *s)
{
	int i;

	while (s[i])
		i++;
	return (i);
}
