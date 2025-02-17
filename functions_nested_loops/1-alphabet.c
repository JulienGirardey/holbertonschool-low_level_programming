#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	while(i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

	return ;
}
