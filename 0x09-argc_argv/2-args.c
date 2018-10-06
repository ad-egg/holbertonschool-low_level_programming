#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: count of arguments supplied to the program
 * @argv: pointers to the strings of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
