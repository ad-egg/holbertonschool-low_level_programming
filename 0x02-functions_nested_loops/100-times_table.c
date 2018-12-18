#include "holberton.h"

/**
 * print_times_table - prints the n times table starting from 0
 * @n: this number has to be a value between 0 and 15 to display a times table
 */

void print_times_table(int n)
{
	int hor, ver, no, no1, no2, no3;

	if ((n < 0) || (n > 15))
		return;
	for (ver = 0; ver <= n; ver++)
	{
		for (hor = 0; hor <= n; hor++)
		{
			no = hor * ver;
			no1 = no / 100;
			no2 = (no / 10) % 10;
			no3 = no % 10;
			if (hor > 0)
				_putchar(' ');
			if ((no < 100) && (hor > 0))
				_putchar(' ');
			else if (no > 99)
				_putchar(no1  '0');
			if ((no < 10) && (hor > 0))
				_putchar(' ');
			else if (no > 9)
				_putchar(no2 + '0');
			_putchar(no3 + '0');
			if (hor < n)
				_putchar(',');
			else if (hor == n)
				_putchar('\n');
		}
	}
}
