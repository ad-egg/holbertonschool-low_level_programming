#include <stdio.h>

/**
 * main - prints the lowercase alphabet except for letters q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char eq;

	for (eq = 'a' ; eq <= 'z' ; eq++)
	{
		if (eq != 'e' && eq != 'q')
			putchar(eq);
	}
	putchar ('\n');
	return (0);
}
