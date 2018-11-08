#include "holberton.h"

/**
 * fail_from - prints error message to standard error and exits with value 98
 * @str: name of file that failed to open or read
 */
void fail_from(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * fail_to - prints error message to standard error and exits with value 99
 * @str: name of file that failed to open or write
 */
void fail_to(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
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
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: points to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int call, shave, bread, bwritten, predicament, danger;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	call = open(argv[1], O_RDONLY);
	if (call == -1)
		fail_from(argv[1]);
	shave = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (shave == -1)
		fail_to(argv[2]);
	bread = read(call, buff, 1024);
	if (bread == -1)
		fail_from(argv[1]);
	bwritten = write(shave, buff, bread);
	if (bwritten == -1)
		fail_to(argv[2]);
	danger = close(call);
	if (danger == -1)
		not_a_close(call);
	predicament = close(shave);
	if (predicament == -1)
		not_a_close(shave);
	return (0);
}
