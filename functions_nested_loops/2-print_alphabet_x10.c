#include "main.h"

/**
 * print_alphabet_x10 - print x10 alphabet
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}

	return (0);
}
