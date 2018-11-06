#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: points to the file to be read and printed
 * @letters: number of letters it should read and print
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int thefile;
	ssize_t bytesread, bytesprinted;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	thefile = open(filename, O_RDONLY);
	if (thefile == -1)
		return (0);
	bytesread = read(thefile, buffer, letters);
	if (bytesread == -1)
		return (0);
	bytesprinted = write(STDOUT_FILENO, buffer, bytesread);
	if (bytesprinted == -1)
		return (0);
	close(thefile);
	free(buffer);
	return (bytesprinted);
}
