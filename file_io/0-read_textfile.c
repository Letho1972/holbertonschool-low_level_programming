#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read a text file and prints it to POSIX stdout
 * @filename: a pointer to the name of file
 * @letters: the number of letters
 * Return: the number of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t Open, Read, Write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	Open = open(filename, O_RDONLY);
	Read = read(Open, buffer, letters);
	Write = write(STDOUT_FILENO, buffer, Read);

	if (Open == -1 || Read == -1 || Write == -1 || Write != Read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(Open);

	return (Write);
}
