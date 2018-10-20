#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to function
 */

void print_all(const char * const format, ...)
{
	var_types anyth[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	unsigned int i, j;
	va_list args;

	i = 0;
	j = 0;

	va_start(args, format);

	while ((format != NULL) && (format[i] != '\0'))
	{
		while(j < 4)
		{
			if (format[i] == anyth[j].car)
			{
				
			}
			j++;
		}
		i++;
	}
}
