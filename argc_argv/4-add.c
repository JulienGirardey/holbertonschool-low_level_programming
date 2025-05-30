#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Fonction main.
*
* @argc: Size of array.
* @argv: Array.
*
* Return: Alway 0.
*/
int main(int argc, char *argv[])
{
	int i;

	int j;

	int result = 0;

	int num;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[i]);
			result += num;
		}
	    printf("%d\n", result);
	}
	return (0);
}
