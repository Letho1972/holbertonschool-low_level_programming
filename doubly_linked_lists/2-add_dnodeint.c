#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Write a function that adds a new node at the beginning
 *@head: the beginning to the list
 *@n: the member
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_Node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_Node == NULL)
	{
		return (NULL);
	}
	new_Node->n = n;
	new_Node->prev = NULL;
	new_Node->next = *head;

	if (*head != 0)
	{
		(*head)->prev = new_Node;
	}
	*head = new_Node;
	return (new_Node);
}
