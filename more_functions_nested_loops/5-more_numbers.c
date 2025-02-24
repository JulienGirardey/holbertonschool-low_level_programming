#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	char i;
	char j = '1';
	int cpt;

	for (cpt = 0; cpt <= 10; cpt++)
	{
		i = '0';
		while (i <= '9')
		{
			_putchar(i);
			i++;
		}

		i = '0';

		while (i <= '4')
		{
			_putchar(j);
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
