#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 89; n++)
	{
		if ((n % 10) > (n / 10))
		{
			putchar((n / 10) + '0');
			if ((n / 10) != (n % 10))
				putchar((n % 10) + '0');
			else
				continue;
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
