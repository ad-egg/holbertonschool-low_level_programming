#include <stdio.h>

/**
 * main - prints all possible combination of 3 digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, n1, n2, n3;

	for (n = 12; n < 790; n++)
	{
		n1 = n / 100;
		n2 = (n / 10) % 10;
		n3 = n % 10;
		if ((n1 < n2) && (n2 < n3))
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			putchar(n3 + '0');
			if (n < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
