#include "holberton.h"

/**
 * cap_string - capitalizes the first letter of each word
 *
 * @str: first letter of each word in this string will be capitalized
 *
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int ind;

	ind = 0;

        if ((str[0] >= 'a') && (str[0] <= 'z'))
                str[0] = str[0] - 32;

	while (str[ind] != '\0')
	{
		if ((str[ind] >= 'a') && (str[ind] <= 'z'))
		{
			if ((str[ind - 1] == ',') ||
				(str[ind - 1] == ' ') ||
				(str[ind - 1] == '\t') ||
				(str[ind - 1] == '\n') ||
				(str[ind - 1] == ';') ||
				(str[ind - 1] == '.') ||
				(str[ind - 1] == '!') ||
				(str[ind - 1] == '?') ||
				(str[ind - 1] == '"') ||
				(str[ind - 1] == '(') ||
				(str[ind - 1] == ')') ||
				(str[ind - 1] == '{') ||
				(str[ind - 1] == '}'))
			{
				str[ind] = (str[ind] - 32);
			}

		}
		ind++;
	}
	return (str);
}
