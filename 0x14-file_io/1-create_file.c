#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: pointer to name of the file to create
 * @text_content: string to write into the created file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int newfile, i, byteswritten;

	if (filename == NULL)
		return (-1);
	newfile = open(filename, O_WRONLY | O_CREAT, 0600);
	if (newfile == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(newfile);
		return (1);
		/** nothing to write but file created so it is success */
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	byteswritten = write(newfile, text_content, i);
	if (byteswritten == -1)
		return (-1);
	close(newfile);
	return (1);
}
