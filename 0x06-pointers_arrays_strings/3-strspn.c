#include "holberton.h"

/**
 * _strspn - gets length of a prefix substring
 *
 * @s: substring in s gets measured
 * @accept: substring
 *
 * Return: number of bytes in the initial segment of s
 * which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	unsigned int x;
	unsigned int y;

	len = 0;
	x = 0;
	y = 0;

	for (x = 0; (s[x] != '\0'); x++)
	{
		if (len != x)
			break;
		for (y = 0; (accept[y] != '\0'); y++)
		{
			if (s[x] == accept[y])
				len++;
		}
	}
	return (len);
}
