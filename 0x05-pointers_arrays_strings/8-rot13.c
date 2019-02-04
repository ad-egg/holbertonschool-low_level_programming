#include <stdlib.h>
#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: this string will be encoded
 * Return: pointer to string
 */

char *rot13(char *str)
{
	int i, j, len;
	char *newstr;
	char *old = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *new = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	newstr = malloc(len);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; old[j] != '\0' && str[i] != old[j]; j++)
			;
		if (str[i] == old[j])
			newstr[i] = new[j];
		else
			newstr[i] = str[i];
			
	}
	return (newstr);
}
