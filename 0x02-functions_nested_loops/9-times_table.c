#include "holberton.h"

/**
 * times_table - prints the 9 times table starting with 0
 */

void times_table(void)
{
	int hor, ver, no, no1, no2;

	for (ver = 0; ver < 10; ver++)
	{
		for (hor = 0; hor < 10; hor++)
		{
			no = hor * ver;
			no1 = no / 10;
			no2 = no % 10;
			if (hor > 0)
				_putchar(' ');
			if ((no < 10) && (hor > 0))
				_putchar(' ');
			else if (no > 9)
				_putchar(no1 + '0');
			_putchar(no2 + '0');
			if (hor < 9)
				_putchar(',');
			else if (hor == 9)
				_putchar('\n');
		}
	}
}
