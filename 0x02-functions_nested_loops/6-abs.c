#include "holberton.h"

/**
 * _abs - returns absolute value of an integer
 * @no: integer whose absolute value is to be returned
 * Return: absolute value of an integer
 */

int _abs(int no)
{
	int n2;

	if (no >= 0)
		n2 = no;
	else if (no < 0)
		n2 = no * -1;
	return (n2);
}
