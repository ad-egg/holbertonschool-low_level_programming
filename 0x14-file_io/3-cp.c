#include "holberton.h"

/**
 * do_not - prints error message to standard error and exits with value 98 if
 * integer passed has value of -1
 * @n: integer value to be checked
 * @str: name of file that failed to open or read
 */
void do_not(int n, char *str)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	}
}

/**
 * carelessly - prints error message to standard error and exits with value 99
 * if integer passed has value of -1
 * @n: integer value to be checked
 * @str: name of file that failed to open or write
 */
void carelessly(int n, char *str)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
	}
}

/**
 * not_a_close - prints error message to standard error and exit with value 100
 * @n: file descriptor value passed to function
 */
void not_a_close(int n)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", n);
	exit(100);
}

/**
 * impending_doom - prints message to standard error and exits with value 97
 * if integer passed does not have value of 3
 * @n: integer whose value will be checked
 */
void impending_doom(int n)
{
	if (n != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: points to arguments
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	int call, shave, pickaxe, shovel, predicament, danger;
	char *grave = NULL;

	impending_doom(argc);
	grave = malloc(1024);
	if (grave == NULL)
		return (-1);
	call = open(argv[1], O_RDONLY);
	do_not(call, argv[1]);
	shave = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	carelessly(shave, argv[2]);
	while ((pickaxe = read(call, grave, 1024)) != 0)
	{
		do_not(pickaxe, argv[1]);
		shovel = write(shave, grave, pickaxe);
		carelessly(shovel, argv[2]);
		if (shovel == 1024)
		{
			free(grave);
			grave = malloc(1024);
			if (grave == NULL)
				return (-1);
		}
	}
	danger = close(call);
	if (danger == -1)
		not_a_close(call);
	predicament = close(shave);
	if (predicament == -1)
		not_a_close(shave);
	free(grave);
	return (0);
}
