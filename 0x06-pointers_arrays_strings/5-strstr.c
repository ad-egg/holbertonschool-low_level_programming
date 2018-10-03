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

	if (!*needle)
		return (haystack);
	if (*needle == 0)
		return (haystack);
	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x] == needle[y])
			{
				if (haystack[x + 1] == needle[y + 1])
				{
					return (&haystack[x]);
				}
			}
		}
	}
	return (NULL);
}
