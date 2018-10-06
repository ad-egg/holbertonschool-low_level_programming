#include <stdio.h>
#include <stdlib.h>
int isnum(int j, char *s);

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
	int i;
	int isnumber;

	i = 1;
	ans = 0;
	isnumber = isnum(0, argv[i]);

	if (argc == 1)
		printf("0\n");
	for (; i < argc; i++)
	{
		if (isnumber == 0)
		{
			ans += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", ans);
	return (0);
}

/**
 * isnum - checks if a symbol is a digit or not
 *
 * @j: index of string
 * @s: string to be checked for symbols that are not digits
 *
 * Return: 0 if string contains only digits, 1 if not
 */

int isnum(int j, char *s)
{
	while (s[j] != '\0')
	{
		if ((s[j] >= '0') && (s[j] <= '9'))
		j++;
		else
			return (1);
	}
	return (0);
}
