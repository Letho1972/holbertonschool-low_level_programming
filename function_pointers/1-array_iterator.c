#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function
 * @array: data
 * @size: type
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;


	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}


