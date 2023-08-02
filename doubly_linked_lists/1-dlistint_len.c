#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked dlistint_t
 *@h: pointer of constant type list_t
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t lenght = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		lenght++;
	}

	return (lenght);
}
