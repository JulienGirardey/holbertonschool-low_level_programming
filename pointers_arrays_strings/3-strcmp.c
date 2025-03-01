#include "main.h"

/**
* _strcmp - Compares two string.
*
* @s1: First string.
* @s2: Second string.
*
* Return: Negative value if s1 is less than s2
* else positive value
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int result = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			result = s1[i] - s2[i];
			return (result);
		}
		else
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	return (0);
}
