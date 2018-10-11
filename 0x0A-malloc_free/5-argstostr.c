#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of program
 *
 * @ac: number of arguments
 * @av: pointer to arguments
 *
 * Return: pointer to new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, ptlen;
	char *pt;

	len = 0;
	ptlen = 0;

	if (ac == 0)
		return (NULL);
	else if (av == 0)
		return (NULL);
	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}
	pt = malloc(sizeof(char) * (ac + len + 1));
	if (pt == NULL)
		return (NULL);
	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			pt[ptlen] = av[i][j];
			ptlen++;
		}
		pt[ptlen] = '\n';
		ptlen++;
	}
	pt[ptlen] = '\0';
	return (pt);
}
