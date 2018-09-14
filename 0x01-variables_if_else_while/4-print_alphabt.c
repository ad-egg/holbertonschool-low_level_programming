#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char eq;

	for (eq = 'a' ; eq <= 'z' ; eq++)
	{
		while (eq != 'e' && eq != 'q')
		{
			putchar(eq);
			break;
		}
	}
	putchar ('\n');

	return (0);
}
