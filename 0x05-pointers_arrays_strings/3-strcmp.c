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
	int len1;
	int len2;

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (len1 == len2)
		return (0);
	else
		return (len1 - len2);
}
