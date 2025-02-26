#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String to revers
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char tmp;

	while (s[end])
		end++;
	end--;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
