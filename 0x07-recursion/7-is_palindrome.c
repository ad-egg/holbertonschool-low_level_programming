#include "holberton.h"
int _strlen_recursion(char *s);
int palcheck(char *s, int len, int check);

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if string is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int end;

	end = (_strlen_recursion(s) - 1);

	return (palcheck(s, end, 0));
}

/**
 * _strlen_recursion - returns length of a string
 *
 * @s: string that will be measured
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * palcheck - checks if string is palindrome
 *
 * @s: string to be checked
 * @check: checks to see if it matches end of string
 * @end: starts at end of string
 *
 * Return: 1 if string is palindrome, 0 if not
 */

int palcheck(char *s, int end, int check)
{
	if (check > end)
		return (1);
	else if (s[end] == s[check])
		return (palcheck(s, end - 1, check + 1));
	return (0);
}
