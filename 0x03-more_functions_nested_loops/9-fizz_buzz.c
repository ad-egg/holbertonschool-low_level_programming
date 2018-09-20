#include "holberton.h"
#include <stdio.h>

/**
 * main - prints numbers 1 to 100, except for
 * multiples of 3 print Fizz, multiples of 5 print Buzz,
 * multiples of both print FizzBuzz
 *
 * Return: 0 on success
 */

int main(void)
{
	int no;

	for (no = 1; no <= 100; no++)
	{
		if (((no % 3) == 0) && !((no % 5) == 0))
		{
			printf("Fizz ");
		}
		else if (((no % 5) == 0) && !((no % 3) == 0))
		{
			if (no < 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else if (((no % 3) == 0) && ((no % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i ", no);
		}
	}
	printf("\n");
	return (0);
}
