#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Write a function that reverses the content of an array
 * @n : the number of elements to swap
 * @a : an array of integers
 * Return: Always nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
