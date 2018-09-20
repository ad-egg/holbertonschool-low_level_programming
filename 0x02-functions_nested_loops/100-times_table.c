#include "holberton.h"

/**
 * times_table - Entry point
 *
 * @n: this number has to be a value between 0 and 15 to display a times table
 */

void print_times_table(int n)
{
	int hor;
	int ver;

	if ((n > 0) && (n <= 15))
	{
		for (ver = 0; ver <= n; ver++)
		{
			for (hor = 0; hor <= n; hor++)
			{
				if (hor == 0)
				{
					_putchar((ver * hor) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if ((ver * hor) <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((ver * hor) + '0');
					if (hor < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else if ((ver  * hor) <= 99)
				{
					_putchar(' ');
					_putchar(((ver * hor) / 10) + '0');
					_putchar(((ver * hor) % 10) + '0');
					if (hor < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(((ver * hor) / 100) + '0');
					_putchar((((ver * hor) / 10) % 10) + '0');
					_putchar(((ver * hor) % 10) + '0');
					if (hor < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
