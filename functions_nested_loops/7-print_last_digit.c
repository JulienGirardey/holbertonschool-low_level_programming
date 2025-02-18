#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_last_digit - print the last digit of n
 *
 * @n: The integer to return
 *
 * Return: Always n.
 */
int print_last_digit(int n)
{
	char buffer[12];
	int length;

	if (n < 0)
		n = n * -1;
	n = n % 10;
	length = sprintf(buffer, "%d", n);
	write(1, buffer, length);

	return (n);
}
