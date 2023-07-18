#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_dog - Write a function that frees dogs
 * @d: dogs
 * Return: always nothing
 */

void free_dog(dog_t *d)

{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
