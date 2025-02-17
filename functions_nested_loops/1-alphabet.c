#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Allway 0.
 */
int print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

	return (0);
}
