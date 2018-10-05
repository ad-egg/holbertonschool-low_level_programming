#include "holberton.h"
int primecheck(int n, int check);

/**
 * is_prime_number - checks if input integer is a prime number
 *
 * @n: integer to be checked if it is prime
 *
 * Return: 1 if input integer is prime number, 0 if not
 */

int is_prime_number(int n)
{
	if ((n == 1) || (n < 0) || (n == 2) || (n == 3))
		return (0);
	else if ((n % 2) == 0)
		return (0);
	return (primecheck(n, 3));
}

/**
 * primecheck - checks if number is prime
 *
 * @n: number to be checked
 * @check: used to check if n is prime
 *
 * Return: 1 if n is prime, 0 if not
 */

int primecheck(int n, int check)
{
	if (n == check)
		return (1);
	else if ((n % check) != 0)
		return (primecheck(n, check + 2));
	else
		return (0);
}
