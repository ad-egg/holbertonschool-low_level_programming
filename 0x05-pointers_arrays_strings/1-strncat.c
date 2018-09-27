#include "holberton.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: will be concatenated into dest
 * @n: src may contain this many or more bytes
 * @dest: this string will get n bytes from src appended to it
 *
 * Return: a pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen;
	int srclen;

	srclen = 0;
	destlen = 0;

	while (dest[destlen] != '\0')
		destlen++;
	while ((srclen < n) && (src[srclen] != '\0'))
	{
		dest[destlen + srclen] = src[srclen];
		srclen++;
	}
	dest[destlen + srclen] = '\0';
	return (dest);
}
