#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Write a function that adds a new node at the end of a list
 *@head: the beginning to the list
 *@str: the new node
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t *temp = NULL;

	temp = *head;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;

	return (newNode);
}
