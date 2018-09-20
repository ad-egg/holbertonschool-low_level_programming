#include "holberton.h"

/**
 * more_numbers - prints the numbers from 0 to 14
 */

void more_numbers(void)
{
	int no;
	int rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (no = 0; no <= 14; no++)
		{
			{
				if (no > 9)
				{
					_putchar((no / 10) + '0');
				}
			}
			_putchar((no % 10) + '0');
		}
		_putchar('\n');
	}
}
