#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int p, q, p1, p2, q1, q2;

	for (p = 0; p < 99; p++)
	{
		p1 = p / 10;
		p2 = p % 10;
		for (q = 1; q < 100; q++)
		{
			q1 = q / 10;
			q2 = q % 10;
			if (p < q)
			{
				putchar(p1 + '0');
				putchar(p2 + '0');
				putchar(' ');
				putchar(q1 + '0');
				putchar(q2 + '0');
				if (p < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
