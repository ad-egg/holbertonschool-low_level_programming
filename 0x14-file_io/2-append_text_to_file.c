#include "holberton.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: points to file
 * @text_content: text to be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int thefile, numchar, byteswritten;

	if (filename == NULL)
		return (-1);
	thefile = open(filename, O_RDONLY | O_APPEND);
	if (thefile == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(thefile);
		return (1);
		/** nothing to append, it is success */
	}
	for (numchar = 0; text_content[numchar] != '\0'; numchar++)
		;
	byteswritten = write(thefile, text_content, numchar);
	if (byteswritten == -1)
		return (-1);
	close(thefile);
	return (1);
}
