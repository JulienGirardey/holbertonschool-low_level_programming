#include "main.h"

/**
 * swap_int - Swaps the value of two int
 *
 * @a: First value to swap
 * @b: Second value to swap
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
