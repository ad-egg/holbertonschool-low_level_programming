#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list no;

	if (separator == NULL)
		separator = "";

	va_start(no, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(no, unsigned int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(no);
}
