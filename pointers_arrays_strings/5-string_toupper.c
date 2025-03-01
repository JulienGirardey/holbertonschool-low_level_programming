#include "main.h"

/**
* string_toupper - change lowercase to uppercase
*
* @str: String to change
*
* Return: String be changed.
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
