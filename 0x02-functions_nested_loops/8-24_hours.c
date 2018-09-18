#include "holberton.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void);
{
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(min / 10);
			_putchar(min % 10);
			_putchar('\n');
		}
	}
	return(0);
}
