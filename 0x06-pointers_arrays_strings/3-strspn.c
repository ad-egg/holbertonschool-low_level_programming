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

	len = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				len++;
				break;
			}
			accept++;
		}
		s++;
	}
	return (len);
}
