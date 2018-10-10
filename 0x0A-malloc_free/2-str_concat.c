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
	int no;

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
	size = (s1index + s2index);
	pt = malloc(sizeof(char) * size + 1);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < s1index; i++)
		pt[i] = s1[i];
	for (no = 0; no < s2index; no++)
	{
		pt[i] = s2[no];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
