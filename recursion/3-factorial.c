#include "main.h"

/**
* factorial - That returns a factorial of a given number.
*
* @n: Base number.
*
* Return: Factorial number.
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
