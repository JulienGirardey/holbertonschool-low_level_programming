#include "main.h"

/**
 *
 */
void times_table(void)
{
	int product = 0;
	int factor = 0;

	while (factor < 10)
	{
		while (product < 10)
		{
			if (product == 9)
			{
				if (factor * product >= 10)
				{
					_putchar('0' + factor * product / 10);
					_putchar('0' + factor * product % 10);
				}
				else
					_putchar('0' + factor * product);
			}
			else if (factor * product >= 10)
			{
				_putchar('0' + factor * product / 10);
				_putchar('0' + factor * product % 10);
				_putchar(',');
				_putchar(' ');
			}
			else if (factor * product <= 10)
			{
				_putchar('0' + factor * product);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			product++;
		}
		product = 0;
		factor++;
		_putchar('\n');
	}
}
