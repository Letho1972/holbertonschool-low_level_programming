#include "search_algos.h"

/**
 * binary_search - that searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: return success.
 */

int binary_search(int *array, size_t size, int value)

{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = 0;
	size_t i = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array:");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}

		{
			printf("\n");
		}

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
