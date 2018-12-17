#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, n1, n2;

	for (n = 1; n <= 89; n++)
	{
		n1 = n / 10;
		n2 = n % 10;
		if (n1 < n2)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			if (n1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
