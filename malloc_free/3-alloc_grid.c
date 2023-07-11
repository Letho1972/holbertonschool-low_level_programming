#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - Write a function that returns a pointer to a two dim array
 * @width: dimensional
 * @height: dimensional
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **ar = NULL;
	int tab, i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (tab = 0; tab < height; tab++)
	{
		ar[tab] = malloc(sizeof(int) * width);
		if (ar == NULL)
		{
			for (i = tab; i >= 0; i--)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[tab][j] = 0;
		}
	}
	return (ar);
}
