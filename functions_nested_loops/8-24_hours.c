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

	printf("%d%d:%d%d\n", houre, houre2, min, min2);
	while (houre != 2 || houre2 != 3 || min != 5 || min2 != 9)
	{
		if (min2 < 9)
		{
			min2++;
			printf("%d%d:%d%d\n", houre, houre2, min, min2);
		}
		else if (min < 5)
		{
			min2 = 0;
			min++;
			printf("%d%d:%d%d\n", houre, houre2, min, min2);
		}
		else if (houre2 < 9)
		{
			min = 0;
			min2 = 0;
			houre2++;
			printf("%d%d:%d%d\n", houre, houre2, min, min2);
		}
		else
		{
			houre2 = 0;
			min = 0;
			min2 = 0;
			houre++;
			printf("%d%d:%d%d\n", houre, houre2, min, min2);
		}
	}
}
