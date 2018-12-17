#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int no;
	char af;

	for (no = 0; no < 10; no++)
		putchar(no + '0');
	for (af = 'a'; af <= 'f'; af++)
		putchar(af);
	putchar ('\n');
	return (0);
}
