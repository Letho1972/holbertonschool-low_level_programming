#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Write a function that adds a new node at the beginning
 *@head: the beginning to the list
 *@str: the new node
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
