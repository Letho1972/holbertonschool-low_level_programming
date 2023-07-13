#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Write a function that creates an array of integers
 * @min: the values
 * @max: the values
 * Return: Nothing.
 */

int *array_range(int min, int max)

{
	int i;
	int size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
