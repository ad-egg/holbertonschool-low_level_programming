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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (needle);
		haystack++;
	}
	return (NULL);
}
