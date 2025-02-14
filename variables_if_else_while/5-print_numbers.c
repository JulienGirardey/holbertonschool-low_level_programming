#include <stdio.h>

/**
 * main - Fonction main
 *
 * Return: 0(sucess)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
