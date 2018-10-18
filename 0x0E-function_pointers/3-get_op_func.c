#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects correct function to do the operation asked by user
 *
 * @s: operator passed as argument to the program
 * @int: first integer passed into function
 * @int: second integer passed into function
 *
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;

	while ((i < 5) && (*s != *(op[i].op)))
		i++;
	return (op[i].f);
}
