#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - do math on two integers
 *
 * @argc: number of arguments
 * @argv: pointers to the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int answer, num1, num2;
	char *rat;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	rat = argv[2];
	if (((*rat == '/') || (*rat == '%')) &&
		((num2 == 0) && (argv[2][1] == '\0')))
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(rat) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	answer = get_op_func(rat)(num1, num2);
	printf("%i\n", answer);
	return (0);
}
