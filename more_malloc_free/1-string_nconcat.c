#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - That concatenates two stings.
*
* @s1: First string to concatenate.
* @s2: Second string to concatenate.
* @n: Number of characters to copy.
*
* Return: Array with two string concatenate.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;

	unsigned int i = 0;

	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		array = malloc((i + j + 1) * sizeof(char));
	else
	    array = malloc((i + n + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		array[i] = s2[j];
		i++;
		j++;
	}
	array[i] = '\0';
	return (array);
}
