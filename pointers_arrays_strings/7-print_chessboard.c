#include "main.h"
#include <stdio.h>

/**
* print_chessboard - Prints the chessboard.
*
* @a: chess piece.
*
* Return: Void.
*/
void print_chessboard(char (*a)[8])
{
	int i;

	int j = 0;

	while (j < 8)
	{
		i = 0;
		while (i < 8)
		{
			printf("%c", a[j][i]);
		    i++;
		}
		printf("\n");
		j++;
	}
}
