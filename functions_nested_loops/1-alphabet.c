#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet()
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
