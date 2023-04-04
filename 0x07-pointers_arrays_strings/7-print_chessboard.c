#include "main.h"

/**
 * print_chessboard - it create chessboard
 * @a: is array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int t;

	for (i = 0 ; i < 8 ; i++)
	{
		for (t = 0 ; t < 8 ; t++)
			_putchar(a[i][t]);
		_putchar('\n');
	}
}
