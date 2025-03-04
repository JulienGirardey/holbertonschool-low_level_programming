#include "main.h"
#include <unistd.h>

/**
* _puts_recursion - That Print a string follow by a new line.
*
* @s: String to print.
*
* Return: Void.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
