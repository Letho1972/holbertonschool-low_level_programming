#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Write a function that returns the number of elements
 *@h: the first node
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t lenght = 0;

	while (h != NULL)
	{
		h = h->next;
		lenght++;
	}

	return (lenght);
}

