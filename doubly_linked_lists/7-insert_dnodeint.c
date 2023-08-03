#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Write a function that inserts a new node
 *@h: the beginning to the list
 *@idx:  is the index of the list
 *@n: new node
 * Return: sucess
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	while (current)
	{
		if (count == idx - 1)
			break;
		current = current->next;
		count++;
	}
	if (current)
	{
		new_node->next = current->next;
		if (current->next)
			current->next->prev = new_node;
		current->next = new_node;
		new_node->prev = current;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}


