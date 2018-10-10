#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory with concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *pt;
	unsigned int size, h, i, j, k;

	j = 0;
	k = 0;

	if (s1 != NULL)
	{
		while (s1[j] != '\0')
			j++;
	}
	if (s2 != NULL)
	{
		while (s2[k] != '\0')
			k++;
	}
	size = (j + k);
	pt = malloc(sizeof(char) * size + 1);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		pt[i] = s1[i];
	}
	for (h = 0; h < k; h++)
	{
		pt[i + h] = s2[h];
	}
	pt[i + h] = '\0';
	return (pt);
}
