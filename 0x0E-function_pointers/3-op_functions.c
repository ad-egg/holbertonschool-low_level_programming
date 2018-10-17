#include "3-calc.h"

/**
 * op_add - adds two integers 
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference between two integers
 *
 * @a: first integer
 * @b: amount to be subtracted from first integer
 *
 * Return: difference of two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers 
 *
 * @a: first integer
 * @b: second integer 
 *
 * Return: product of two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one integer by another
 *
 * @a: integer to be divided
 * @b: integer to divide by
 *
 * Return: result of the first integer divided by second integer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - checks to see if one integer is a factor of the other integer
 *
 * @a: integer to be divided by other integer
 * @b: integer to be checked if it is a factor of the other integer
 *
 * Return: 0 if int b is factor of int a, remainder of the quotient if not
 */

int op_mod(int a, int b)
{
	return (a % b);
}
