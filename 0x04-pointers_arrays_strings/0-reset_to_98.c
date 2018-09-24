#include "holberton.h"

/**
 * reset_to_98 - resets value of variable to 98
 *
 * @*n: this pointer's value will be changed to 98
 */

void reset_to_98(int *n)
{
	int i; 

	i = 98;
	n = &i;
}
