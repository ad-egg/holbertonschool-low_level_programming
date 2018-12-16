#include <stdio.h>

/**
 * main - prints all possible combination of 3 digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 12; n <= 789; n++)
	{
		if (((n % 10) > ((n / 10) % 10)) && (((n / 10) % 10) > (n / 100)))
		{
			putchar ((n / 100) + '0');
			if ((n / 100) != ((n / 10) % 10))
			{
				putchar(((n / 10) % 10) + '0');
				if (((n / 10) % 10) != (n % 10))
					putchar((n % 10) + '0');
				else
					continue;
			}
			else
				continue;
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
