#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int q;

	for (n = 0; n <= 98; n++)
	{
		for (q = 1; q <= 99; q++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			if ((q > n) && (q != n))
			{
				putchar((q / 10) + '0');
				putchar((q % 10) + '0');
			}
			else
				continue;
			if ((n != 98) && (q != 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
