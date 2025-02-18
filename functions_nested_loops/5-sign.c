#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: The character to print
 *
 * Return: 1 if is great than zero and 0 if is zero and -1 if is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
