#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char charType = 'G';
	int intType = 8;
	long int longType = 8000000000;
	long long int longlongType = 8;
	float floatType = 8.7;

	printf("Size of a char: %ld byte(s)\n",
		sizeof(charType));

	printf("Size of an int: %ld byte(s)\n",
		sizeof(intType));

	printf("Size of a long int: %ld byte(s)\n",
		sizeof(longType));

	printf("Size of a long long int: %ld byte(s)\n",
		sizeof(longlongType));

	printf("Size of a float: %ld byte(s)\n",
		sizeof(floatType));

	return (0);
}
