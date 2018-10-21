#ifndef VARIADICFUNCS_H
#define VARIADICFUNCS_H

/**
 * struct datatypes - for data types
 *
 * @car: character to print
 * @f: pointer to function that selects what type of data it is
 */
struct datatypes
{
	char *car;
	void (*f)(va_list args);
};
typedef struct datatypes var_types;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
