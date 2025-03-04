#include "main.h"

/**
* sqrt_helper - calcul the natural quare root.
*
* @n: quare root.
* @x: check if quare root.
*
* Return: int for result.
*/
int sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	else
		return (sqrt_helper(n, x + 1));
}

/**
* _sqrt_recursion - That returns the natural quare root of a number.
*
* @n: Number to calculated.
*
* Return: Quare root of n.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 1));
}
