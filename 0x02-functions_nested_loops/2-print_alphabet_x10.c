#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void);
{
	char az;
	char rep;

	rep = 0
	while (rep <= 9)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
			_putchar('\n');
		}
		rep++;
	}
	return (0);
}
