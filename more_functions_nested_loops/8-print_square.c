#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of print
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i = 0;
	int j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size == 0 || size < 0)
		_putchar('\n');
}
