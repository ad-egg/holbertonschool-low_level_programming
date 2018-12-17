#include "holberton.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char az;
	int rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}
