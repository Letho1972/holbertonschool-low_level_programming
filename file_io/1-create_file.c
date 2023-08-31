#include "main.h"
#include <stdlib.h>
/**
 * create_file - fct to create a file
 * @filename: ptr to the name of file
 * @text_content: a pointer to a string to write to the file
 * Return: -1
 */
int create_file(const char *filename, char *text_content)
{
	int Open, Write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	Open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	Write = write(Open, text_content, len);

	if (Open == -1 || Write == -1)
		return (-1);

	close(Open);

	return (1);
}
