#include "main.h"

/**
 * _isalpha - checks for lowercase
 *
 * @c: The character to print
 *
 * Return: 0 if c is lowercase 0 otherwise
 */
int _isalpha(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
