#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: this string will be encoded
 * Return: pointer to string
 */

char *rot13(char *str)
{
	int i, j;
	char *newstr;
	char *old = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *new = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	newstr = strdup(str);
	for (i = 0; newstr[i] != '\0'; i++)
	{
		for (j = 0; old[j] != '\0'; j++)
		{
			if (str[i] == old[j])
				newstr[i] = new[j];
		}
	}
	return (newstr);
}
