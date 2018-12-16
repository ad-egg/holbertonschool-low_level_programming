#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az;
	char AZ;

	for (az = 'a' ; az <= 'z' ; az++)
		putchar(az);
	for (AZ = 'A' ; AZ <= 'Z' ; AZ++)
		putchar(AZ);
	putchar ('\n');
	return (0);
}
