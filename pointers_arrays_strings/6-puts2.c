#include "main.h"

/**
 * puts2 - Prints every other character
 *
 * @str: String to print
 *
 * Return: Void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i >= 448)
			break;
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
