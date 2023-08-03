#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns the nth node
 *@head: the beginning to the list
 *@index: index
 * Return: sucess
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	dlistint_t *current = head;

		while (current != NULL && index > 0)
		{
			current = current->next;
			index--;
		}
		if (current == NULL)
		{
			return (NULL);
		}
		return (current);
}
