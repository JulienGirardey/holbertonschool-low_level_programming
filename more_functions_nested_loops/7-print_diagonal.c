#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of line
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int nbSpace;
	int i = 0;
	int j = 0;

	while (i < n)
	{
		if (i > 0)
		{
			j = i;
			nbSpace = 0;
			while (j > nbSpace)
			{
				_putchar(' ');
				nbSpace++;
			}
		}
		if (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		i++;
	}
	if (n == 0 || n < 0)
		_putchar('\n');
}
