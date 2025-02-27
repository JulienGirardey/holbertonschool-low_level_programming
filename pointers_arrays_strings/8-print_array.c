#include "main.h"
#include <stdio.h>

/**
* print_array - print n elements of an array
*
* @a: Element of array
* @n: length of array
*
* Return: Void.
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i])
	{
		if (i == n - 1 || n == 1 || n < 0)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
