#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings up to n bytes
 *
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of bytes to be concatenated from s2
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int s1index, s2index, total, i, j;

	s1index = 0;
	s2index = 0;

	if (s1 != NULL)
	{
		while (s1[s1index] != '\0')
			s1index++;
	}
	if (s2 != NULL)
	{
		while (s2[s2index] != '\0')
			s2index++;
	}
	if (n >= s2index)
		total = s1index + s2index + 1;
	else
		total = s1index + n + 1;
	pt = malloc(sizeof(char) * total);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < s1index; i++)
		pt[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		pt[i] = s2[j];
		i++;
	}
	pt[total] = '\0';
	return (pt);
}
