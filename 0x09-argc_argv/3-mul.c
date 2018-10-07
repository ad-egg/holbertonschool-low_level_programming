#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - multiplies two numbers
 *
 * @argc: count of arguments supplied to the program
 * @argv: pointers to the strings of arguments
 *
 * Return: 0 after multiply two numbers,
 * returns 1 if program did not receive two arguments
 */

int main(int argc, char *argv[])
{
	int ans;
	int num1;
	int num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	ans = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%i\n", ans);
	return (0);
}
