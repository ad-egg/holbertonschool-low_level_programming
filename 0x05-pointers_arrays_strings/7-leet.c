#include "holberton.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: this string will be encoded into 1337
 *
 * Return: pointer to 1337 string
 */

char *leet(char *str)
{
	int ind;
	int swap;

	char old[] = {'a', 'A', 'e', 'E', 'l', 'L', 'o', 'O', 't', 'T'};
	char new[] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7'};

	for (ind = 0; str[ind] != '\0'; ind++)
	{
		for (swap = 0; old[swap] != '\0'; swap++)
		{
			if (str[ind] == old[swap])
				str[ind] = new[swap];
		}
	}
	return (str);
}
