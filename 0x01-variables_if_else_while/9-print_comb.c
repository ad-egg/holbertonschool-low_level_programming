#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char no;

	for (no = '0' ; no <= '9' ; no++)
	{
		putchar(no);

		if (no < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');

	return (0);
}

