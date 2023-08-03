#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dnodeint_end - Write a function that adds a new node at the end
 *@head: the beginning to the list
 *@n: the member
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *last;
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	last = *head;

	while (last != NULL && last->next != NULL)
	{
		last = last->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = last;

	if (last != NULL)
	{
		last->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	if (*head == NULL)
	{
		*head = new_node;
	}
	return (new_node);
}
