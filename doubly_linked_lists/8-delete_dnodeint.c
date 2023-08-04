#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Write a function that deletes the node at index
 *@head: the beginning to the list
 *@index:  is the index of the list
 * Return: sucess
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	unsigned int i;
	dlistint_t *current = *head;
	dlistint_t *prev_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		prev_node = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev_node->next = current->next;
	if (current->next)
		current->next->prev = prev_node;

	free(current);

	return (1);
}
