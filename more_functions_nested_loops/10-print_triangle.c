#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1;
	int j;

	while (i <= size)
	{
		j = 0;
		while (j < size)
		{
			if (j < size - i)
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		i++;
		_putchar('\n');
	}
	if (size == 0 || size < 0)
		_putchar('\n');
}
