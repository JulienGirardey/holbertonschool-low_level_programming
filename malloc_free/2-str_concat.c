#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* str_concat - That concatenates two string.
*
* @s1: First string to concatenate.
* @s2: Second string to concatenate.
*
* Return: Pointer with s1 and s2 concatenates.
*/
char *str_concat(char *s1, char *s2)
{
	char *concat = "";

	int i = 0;

	int j = 0;

	int sizeS1 = 0;

	int sizeS2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (concat);
	while (s1[sizeS1])
		sizeS1++;
	while (s2[sizeS2])
		sizeS2++;
	concat = malloc((sizeS1 + sizeS2) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	while (i < sizeS1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < sizeS2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	return (concat);
}
