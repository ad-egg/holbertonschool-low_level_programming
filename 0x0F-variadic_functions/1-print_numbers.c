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
	va_list strlist;
	unsigned int i;

	va_start(strlist, n);
	for (i = 0; i < n; i++)
	{
		va_arg(strlist, char *);
		if (va_arg(strlist, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(strlist, char *));
		if ((i != (n - 1)) && (separator != NULL))
			printf("%s,", separator);
	}
	printf("\n");
	va_end(strlist);
}
