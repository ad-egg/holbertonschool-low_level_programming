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

int main(char argc, int *argv[])
{
	int secondint, answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (get.op(*argv[2]) == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	secondint = atoi(*argv[3]);
	if (((*argv[2] == '/') || (*argv[2] == '%')) &&
		((secondint == 0) || (argv[2][1] != '\0')))
	{
		printf("Error\n");
		exit (100);
	}


	answer = atoi();
	printf("%i\n", answer);
	return (0);
}
