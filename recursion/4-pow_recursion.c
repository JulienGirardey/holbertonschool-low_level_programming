#include "main.h"

/**
* _pow_recursion - That returns the value of x raised to the power of y.
*
* @x: First number.
* @y: Seconde number.
*
* Return: Value of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
