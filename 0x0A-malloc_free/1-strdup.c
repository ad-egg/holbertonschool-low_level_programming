#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - allocates memory containing a copy of string given as parameter
 *
 * @str: a copy of this string will be in allocated memory space
 *
 * Return: pointer to newlly alocated space in memory
 */

char *_strdup(char *str)
{
	char *pt;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	pt = malloc(len * sizeof(char) + 1);
	if (pt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
		pt[i] = str[i];
	pt[i] = '\0';
	return (pt);
}
