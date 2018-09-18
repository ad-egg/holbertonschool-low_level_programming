#include "holberton.h"

/**
 * print_alphabet - Entry point
 */

void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}
