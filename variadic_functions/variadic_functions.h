#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
* struct format_types - list of types of arguments.
*
* @type: listes of type elements.
* @print: function to use for type.
*/
typedef struct format_types
{
	char type;

	void (*print)(va_list *);
} f_t;

#endif
