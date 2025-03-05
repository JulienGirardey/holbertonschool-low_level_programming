#include <stdio.h>

/**
* main - Fonction main.
*
* @argc: Size of array.
* @argv: Array.
*
* Return: Alway 0.
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	while (*argv)
		argv++;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			sum++;
		printf("%d\n", sum);
	}
	else
		printf("%d\n", sum);
	return (0);
}
