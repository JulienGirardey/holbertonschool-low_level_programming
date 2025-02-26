#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: String to print
 *
 * Return: Void.
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	i--;
	i = i / 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
