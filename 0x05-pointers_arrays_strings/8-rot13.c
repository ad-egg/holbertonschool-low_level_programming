#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @str: this string will be encoded
 *
 * Return: pointer to string
 */

char *rot13(char *str)
{
	int ind;
	char *pt = str;

	ind = 0;

	while (str[ind] != '\0')
	{
		if ((str[ind] >= 'a') && (str[ind] <= 'm'))
			str[ind] = str[ind] + 13;
		else if ((str[ind] >= 'n') && (str[ind] <= 'z'))
			str[ind] = str[ind] - 13;
		else if ((str[ind] >= 'A') && (str[ind] <= 'M'))
			str[ind] = str[ind] + 13;
		else if ((str[ind] >= 'N') && (str[ind] <= 'Z'))
			str[ind] = str[ind] - 13;
		ind++;
	}

	return (pt);
}
