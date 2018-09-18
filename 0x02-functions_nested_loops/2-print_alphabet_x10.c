#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 */

void print_alphabet_x10(void)
{
	char az;
	char rep;

	rep = 0;
	while (rep <= 9)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		rep++;
		_putchar('\n');
	}
}
