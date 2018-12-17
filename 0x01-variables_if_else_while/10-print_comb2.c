#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * Return: Always 0 (Success)
 */
int main(void)
{
	int no;

	for (no = 0; no < 100; no++)
	{
		putchar((no / 10) + '0');
		putchar((no % 10) + '0');
		if (no < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
