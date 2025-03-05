#include <stdio.h>
#include <stdlib.h>

/**
* main - Fonction main.
*
* @argc: Size of array.
* @argv: Array.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int result;

	int produit;

	int facteur;

	if (argc == 3)
	{
		produit = atoi(argv[1]);
		facteur = atoi(argv[2]);
		result = produit * facteur;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
