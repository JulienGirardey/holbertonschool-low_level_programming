#include "main.h"

/**
 * print_rev - Reverse a string
 *
 * @s: String to reverse
 *
 * Return: Void.
 */
void print_rev(char *s)
{
	int end = 0;

	while (s[end])
		end++;
	while (end > 0)
	{
		_putchar(s[end]);
		end--;
	}
	_putchar('\n');
}
