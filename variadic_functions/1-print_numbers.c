#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - That prints numbers, followed by a new line.
*
* @separator: Characters use to separate numbers.
* @n: Number to prints.
*
* Return: Always void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);
	while (i <= n)
	{
		printf("%d", va_arg(args, int));
		if (i == n - 1)
			break;
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
