#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers
 *
 * @argc: count of arguments supplied to the program
 * @argv: pointers to the strings of arguments
 *
 * Return: 0 on success
 * return 1 if one of the numbers contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int ans = 0;
	int i = 1;
	int j = 0;

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			j = 0;
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		ans += atoi(argv[i]);
		i++;
	}
	printf("%i\n", ans);
	return (0);
}
