#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Write a function that returns the sum of all the data (n)
 *@head: the beginning to the list
 * Return: sucess
 */

int sum_dlistint(dlistint_t *head)

{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
