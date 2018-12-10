#include <unistd.h>

/**
 * main - prints a quote
 * Return: always 1
 */
int main(void)
{
	char *str;
	int i;
	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0; str[i] != '\0'; i++)
		;
	write(STDERR_FILENO, str, i);
	write(STDERR_FILENO, "\n", 1);
	return (1);
}
