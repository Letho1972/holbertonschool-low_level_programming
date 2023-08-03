#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list
 *@head: the beginning to the list
 * Return: sucess
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
