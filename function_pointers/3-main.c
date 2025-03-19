#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - check the code
*
* @argc: Number of parameters
* @argv: Array of elements
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int a, b, result;

	op_t op;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op.f = get_op_func(argv[2]);
	if (op.f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op.f(a, b);
	printf("%d\n", result);
	return (0);
}
