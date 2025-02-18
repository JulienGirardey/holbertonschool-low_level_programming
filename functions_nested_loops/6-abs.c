#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: The number to compute
 *
 * Return: The absolute value of @n.
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
