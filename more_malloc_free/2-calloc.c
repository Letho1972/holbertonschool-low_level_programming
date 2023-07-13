#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Write a function that allocates memory for an array
 * @size: unsigned int size
 * @nmemb: unsigned int nmemb
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int total_size;
	unsigned char *byte_ptr;
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		byte_ptr = ptr;

		for (i = 0; i < total_size; i++)
		{
			byte_ptr[i] = 0;
		}
	}

	return (ptr);
}
