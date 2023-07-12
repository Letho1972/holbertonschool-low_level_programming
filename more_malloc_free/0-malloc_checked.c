#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b:  unsigned int b
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)

{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
