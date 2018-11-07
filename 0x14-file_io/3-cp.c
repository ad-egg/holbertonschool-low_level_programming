#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: points to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bread, bwritten, close_to, close_from;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(fd[2], "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	bread = read(file_from, buff, 1024);
	if ((file_from == -1) || (bread == -1))
	{
		dprintf(fd[2], "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	bwritten = write(file_to, buff, bread);
	if ((file_to == -1) || (bwritten == -1))
	{
		dprintf(fd[2], "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_from = close(file_from);
	close_to = close(file_to);
	if ((close_from == -1) || (close_to == -1))
	{
		if (close_from == -1)
			dprintf(fd[2], "Error: Can't close fd %i\n", file_from);
		if (close_to == -1)
			dprintf(fd[2], "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
	return (0);
}
