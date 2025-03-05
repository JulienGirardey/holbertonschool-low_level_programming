#include "main.h"

/**
* help_prime_nb - Help is_prime_number fonction.
*
* @n: Number to test.
* @x: Number to increment.
*
* Return: Integer.
*/
int help_prime_nb(int n, int x)
{
	if (x == 1)
		return (1);
	if (x != n && n % x == 0)
		return (0);
	return (help_prime_nb(n, x - 1));
}
/**
* is_prime_number - Find prime number.
*
* @n: Integer to test.
*
* Return: If the integer is a prime number.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (help_prime_nb(n, n));
}
