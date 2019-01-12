#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int reps;
	unsigned long int fib, num1 = 0, num2 = 1;

	for (reps = 1; reps <= 50; reps++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		if (reps < 50)
			printf("%lu, ", fib);
		else
			printf("%lu\n", fib);
	}
	return (0);
}
