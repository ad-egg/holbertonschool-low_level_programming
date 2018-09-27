#include "holberton.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: src string will be appended to this string
 * @src: this string will be appended to dest string
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *pt = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (pt);
}
