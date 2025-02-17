#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * c - is a letter to check
 *
 * Return: 0 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
