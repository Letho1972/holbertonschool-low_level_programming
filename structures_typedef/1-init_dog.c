#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Define a new type struct dog
 * @d: my dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: always nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
