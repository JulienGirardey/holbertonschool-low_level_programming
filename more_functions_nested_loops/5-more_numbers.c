#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int cpt;
	int i;

	for (cpt = 0; cpt < 10; cpt++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i / 10 > 0)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			i++;
		}
		_putchar('\n');
	}
}
