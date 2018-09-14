#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char no;
	char af;

	for (no = '0' ; no <= '9' ; no++)
	{
		putchar(no);
	}
	for (af = 'a' ; af <= 'f' ; af++)
	{
		putchar(af);
	}
	putchar ('\n');

	return (0);
}
