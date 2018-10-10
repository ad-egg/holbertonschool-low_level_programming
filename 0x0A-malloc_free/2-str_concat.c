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
	int s1index = 0;
	int s2index = 0;
	int size;
	int i;

	while (*s1 != '\0')
	{
		s1++;
		s1index++;
	}
	while (*s2 != '\0')
	{
		s2++;
		s2index++;
	}
	size = (s1index + s2index + 1);
	pt = malloc(sizeof(char) * size);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		pt[i] = pt[s1index + s2index];
	pt[i] = '\0';
	return (pt);
}
