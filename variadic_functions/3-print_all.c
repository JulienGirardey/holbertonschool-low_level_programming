#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_char - function use to print a char.
*
* @arg: Character to print.
*
* Return: Always void.
*/
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
* print_int - function use to print a int.
*
* @arg: int to print.
*
* Return: Always void.
*/
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
* print_float - function use to print a float.
*
* @arg: Double to print.
*
* Return: Always void.
*/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
* print_string - function use to print a string.
*
* @arg: string to print.
*
* Return: Always void.
*/
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
* print_all - That prints anything.
*
* @format: List of types of arguments passed to the function.
*
* Return: Always void.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;

	const char *separator = "";

	f_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *types[j].type)
			{
				printf("%s", separator);
				types[j].print(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
