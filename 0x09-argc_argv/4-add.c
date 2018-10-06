#include <stdio.h>
#include <stdlib.h>
int isnum();

/**
 * main - multiplies two numbers
 *
 * @argc: count of arguments supplied to the program
 * @argv: pointers to the strings of arguments
 *
 * Return: 0 on success
 * return 1 if one of the numbers contains symbols that are not digits
 */

int main(int argc, char **argv)
{
	int ans;

	ans = (atoi(argv[1]) + atoi(argv[2]));

	if (argc == 1)
		printf("0\n");
	else if ( )
	{
		printf("Error");
		return (1);
	}
	else
		printf("%i\n", ans);
	return (0);
}

/**
 * isnum - checks if a symbol is a digit or not
 *
 * @:
 *
 * Return: 
 */

int isnum()
{

}
