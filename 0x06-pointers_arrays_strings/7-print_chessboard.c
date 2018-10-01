#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: two-dimensional array that will be the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int hor;
	int ver;

	for (hor = 0; hor < 8; hor++)
	{
		for (ver = 0; ver < 8; ver++)
		{
			_putchar(a[hor][ver]);
		}
		_putchar('\n');
	}
}
