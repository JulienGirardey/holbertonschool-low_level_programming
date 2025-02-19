#include "main.h"

/**
 * times_table - display 9 table
 *
 * Return: void
 */
void times_table(void)
{
	int product = 0;
	int factor = 0;

	while (factor < 10)
	{
		while (product < 10)
		{
			if (product == 0)
				_putchar('0' + factor * product);
			else if (factor * product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + factor * product / 10);
				_putchar('0' + factor * product % 10);
			}
			else if (factor * product <= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + factor * product);
			}
			product++;
		}
		product = 0;
		factor++;
		_putchar('\n');
	}
}
