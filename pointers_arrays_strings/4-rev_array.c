#include "main.h"
#include <stdio.h>

/**
* reverse_array - Reverse the content of an array
*
* @a: Array to reverse
* @n: Number of elements
*
* Return: Void.
*/
void reverse_array(int *a, int n)
{
	int i = 0;

	int box = 0;

	while (i < n - 1)
	{
		box = a[i];
		a[i] = a[n - 1];
		a[n - 1] = box;
		i++;
		n--;
	}
}
