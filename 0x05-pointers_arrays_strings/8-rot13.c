#include <stdlib.h>
#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: this string will be encoded
 * Return: pointer to string
 */

char *rot13(char *str)
{
	int i, length;
	char *newstr;

	for (length = 0; str[length] != '\0'; length++)
		;
	newstr = malloc(length);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a'
			) && (str[i] <= 'z')))
		{
			if (((str[i] >= 'A') && (str[i] <= 'M')) || ((
				str[i] >= 'a') && (str[i] <= 'm')))
				newstr[i] = str[i] + 13;
			else
				newstr[i] = str[i] - 13;
		}
		else
			newstr[i] = str[i];
	}
	return (newstr);
}
