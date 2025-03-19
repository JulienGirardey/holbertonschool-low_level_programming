#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_strings - That prints strings, followed by a new line.
*
* @separator: Characters use for separate arguments.
* @n: Number of elements.
*
* Return: Always void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	if (n == 0)
	{
		va_end(args);
		printf("\n");
		exit(EXIT_FAILURE);
	}
	va_start(args, n);
	while (i < n)
	{
		printf("%s", va_arg(args, char*));
		if (i == n - 1)
			break;
		if (separator == NULL)
			printf("(nil)");
		else
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
