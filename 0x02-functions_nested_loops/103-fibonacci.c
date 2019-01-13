#include <stdio.h>

/**
 * main - finds and prints the sum of the even numbers in the Fibonacci
 * sequence whose values do not exceed 4,000,000
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int fib = 0, num1 = 0, num2 = 1, total = 0;

	while (fib < 4000000)
	{
		if (fib % 2 == 0)
			total += fib;
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
	}
	printf("%lu\n", total);
	return (0);
}
