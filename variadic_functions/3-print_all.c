#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_char - function use to print a char.
*
* @args: Character to print.
*
* Return: Always void.
*/
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
* print_int - function use to print a int.
*
* @args: int to print.
*
* Return: Always void.
*/
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
* print_float - function use to print a float.
*
* @args: Double to print.
*
* Return: Always void.
*/
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
* print_string - function use to print a string.
*
* @args: string to print.
*
* Return: Always void.
*/
void print_string(va_list *args)
{
	char *s = va_arg(*args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
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
	int i = 0, j;

	const char *separator = "";

	f_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list args;

	va_start(args, format);
	if (format == NULL)
		return;
	while (format[i] != '\0')
	{
		j = 0;
		while (types[j].type)
		{
			if (types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].print(&args);
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
