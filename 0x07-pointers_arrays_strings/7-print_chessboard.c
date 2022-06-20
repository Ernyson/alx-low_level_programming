#include "main.h"
/**
 * print_chessboard - print the values of the 2d array
 * @a: first argument
 *
 * Description: return the required result
 *
 * Return: return void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
