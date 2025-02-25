#include <stdio.h>

/**
 * fizzBuzz - print numbers from 1 to 100
 * write Fizz if multiple of 3 and Buzz
 * if multiple of 5
 *
 * Return: void
 */
void fizzBuzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	}
	printf("\n");
}

/**
 * main - talk other function
 *
 * Return: 0
 */
int main(void)
{
	fizzBuzz();
	return (0);
}
