#include <stdlib.h>
#include "holberton.h"

/**
 * str_nconcat - concatenates two strings up to n bytes
 *
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: pointer to concatenated string
 */

char *str_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int s1index, s2index, lens1, lens2, total;

	if ((s1 == NULL) || (s2 == NULL))
		
	for (s1index = 0; s1[s1index] != '\0'; s1index++)
		lens1++;
	for (s2index = 0; s2[s2index] != '\0'; s2index++)
		lens2++;
	if (n >= lens2)
		total = lens1 + lens2 + 1;
	else
		total = lens1 + n + 1;
	pt = malloc(sizeof(char) * total);
	if (pt == NULL)
		return (NULL);




	pt[total] = '\0';
	return (pt);
}
