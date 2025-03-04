#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of the two diagonals.
*
* @a: Array to print.
* @size: Size of array.
*
* Return: Void.
*/
void print_diagsums(int *a, int size)
{
	int diag1 = 0;

	int diag2 = 0;

	int i = 0;

	int j = 0;

	while (i < size && j < size)
	{
		if (j == i)
		    diag1 += a[i * size + j];
		j++;
		i++;
	}
	i = 0;
	j = size - 1;
	while (i < size && j >= 0)
	{
		diag2 += a[i * size + j];
		j--;
		i++;
	}
	printf("%d, %d\n", diag1, diag2);
}
