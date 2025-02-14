#include <stdio.h>

/**
 * main - Fonction main
 *
 * Return: 0(sucess)
 */
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
