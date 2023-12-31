#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: ptr to name of file
 * @text_content: the string to add the end of the file
 * Return: -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int Open, Write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	Open = open(filename, O_WRONLY | O_APPEND);
	Write = write(Open, text_content, len);

	if (Open == -1 || Write == -1)
		return (-1);

	close(Open);

	return (1);
}
