#include "main.h"

/**
 * print_last_digit - print the last digit of n
 *
 * @n: The integer to return
 *
 * Return: Always n.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	n = n % 10;
	return (n);
}
