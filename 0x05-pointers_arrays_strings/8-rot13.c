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
	int swap;

	char old[] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};
	char rot[] = {'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
		'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q',
		'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm'};

	ind = 0;
	swap = 0;

	for (ind = 0; str[ind] != '\0'; ind++)
	{
		for (swap = 0; old[swap] != '\0'; swap++)
		{
			if (str[ind] == old[swap])
				str[ind] = rot[swap];
		}
	}
	return (str);
}
