#include <stdio.h>

/**
 * main - computes and returns the sum of all the multiples of 3 or 5
 * below 1024 (excluded) and prints it
 * Return: always 0 (success)
 */
int main(void)
{
	int total = 0, mul3, mul5;

	for (mul3 = 0; mul3 < 1024; mul3 += 3)
		total += mul3;
	for (mul5 = 0; mul5 < 1024; mul5 += 5)
		total += mul5;
	printf("%i\n", total);
	return (0);
}
