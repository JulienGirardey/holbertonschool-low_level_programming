#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Display horloge count
 *
 * Return: void
 */
void jack_bauer(void)
{
	int min = 0;
	int min2 = 0;
	int houre = 0;
	int houre2 = 0;

	_putchar('0' + houre);
	_putchar('0' + houre2);
	_putchar(':');
	_putchar('0' + min);
	_putchar('0' + min2);
	_putchar('\n');
	while (houre != 2 || houre2 != 3 || min != 5 || min2 != 9)
	{
		if (min2 < 9)
		{
			min2++;
			_putchar('0' + houre);
			_putchar('0' + houre2);
			_putchar(':');
			_putchar('0' + min);
			_putchar('0' + min2);
			_putchar('\n');
		}
		else if (min < 5)
		{
			min2 = 0;
			min++;
			_putchar('0' + houre);
			_putchar('0' + houre2);
			_putchar(':');
			_putchar('0' + min);
			_putchar('0' + min2);
			_putchar('\n');
		}
		else if (houre2 < 9)
		{
			min = 0;
			min2 = 0;
			houre2++;
			_putchar('0' + houre);
			_putchar('0' + houre2);
			_putchar(':');
			_putchar('0' + min);
			_putchar('0' + min2);
			_putchar('\n');
		}
		else
		{
			houre2 = 0;
			min = 0;
			min2 = 0;
			houre++;
			_putchar('0' + houre);
			_putchar('0' + houre2);
			_putchar(':');
			_putchar('0' + min);
			_putchar('0' + min2);
			_putchar('\n');
		}
	}
}
