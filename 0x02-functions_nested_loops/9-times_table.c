#include "holberton.h"

/**
 * times_table - Entry point
 */

void times_table(void)
{
	int hor;
	int ver;

	for(ver = 0; ver <= 9; ver++)
	{
		for (hor = 0; hor <= 9; hor++)
		{
			_putchar(((ver * hor) / 10) + '0');
			_putchar(((ver * hor) % 10) + '0');
			if (hor < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
