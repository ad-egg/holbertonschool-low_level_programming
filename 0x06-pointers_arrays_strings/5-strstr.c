#define NULL ((char *)0)
#include "holberton.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: pointer to beginning of substring, or NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	if (*needle == '\0')
		return (haystack);
	if (*needle == 0)
		return (haystack);
	for (x = 0; haystack[x] != '\0'; x++)
	{
		y = 0;
		while (haystack [x + y] == needle[y])
			y++;
		if (needle[y] == '\0')
			return (&haystack[x]);
	}
	return (NULL);
}
