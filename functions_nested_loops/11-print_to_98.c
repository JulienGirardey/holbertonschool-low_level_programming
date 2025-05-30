#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - display all number for go to 98
 *
 * @n: number to start
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n++;
		}
	}
	printf("\n");
}
