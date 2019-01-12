#include "holberton.h"

/**
 * main - prints Holberton
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *string = "Holberton\n";
	int i;

	for (i = 0; i < 10; i++)
		_putchar(string[i]);
	return (0);
}
