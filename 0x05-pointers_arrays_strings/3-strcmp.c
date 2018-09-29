#include "holberton.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: this string will be compared to s2
 * @s2: this string will be compared to s1
 *
 * Return: 0 if s1 and s2 are equal, else print the difference of (*s1 - *s2)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
