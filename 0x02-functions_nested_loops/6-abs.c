#include "holberton.h"

/**
 * _abs - Entry point
 *
 * Return: Always 0 (Success)
 */

int _abs(int)
{
	int no;

	if (no > 0)
		_putchar(no);
	else if (no == 0)
		_putchar(no);
	else
		_putchar(-no);

	return(0);
}
