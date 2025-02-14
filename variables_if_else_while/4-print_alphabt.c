#include <stdio.h>

/**
 * main - Fonction main
 *
 * Return: 0(sucess)
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i == 'e' || i == 'q')
			i++;
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
