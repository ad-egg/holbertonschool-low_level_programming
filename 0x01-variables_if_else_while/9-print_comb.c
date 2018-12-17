#include <stdio.h>

/**
 * main - prints all possible combination of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int no;

	for (no = 0; no < 10; no++)
	{
		putchar(no + '0');
		if (no < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
