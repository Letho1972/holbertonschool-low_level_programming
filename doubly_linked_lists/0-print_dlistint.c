#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - that prints all the elements of a dlistint_t list
 *@h: pointer of constant type list_t
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count_node = 0;
	const dlistint_t *ptr = h;

	if (h == NULL)
		return (count_node);

	while (ptr != NULL)
	{
	if (ptr->n != 0)

	printf("%d\n", ptr->n);

	else
	{
	printf("%d\n", ptr->n);
	}
	count_node++;
	ptr = ptr->next;
	}
	return (count_node);
}
