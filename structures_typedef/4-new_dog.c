#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Write a function that creates a new dog
 * @name: name to the new dog
 * @age: age to the new dog
 * @owner: owner to the new dog
 * Return: always nothing
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}

	newDog->name = (char *)malloc(strlen(name) + 1);
	if (newDog->name == NULL)
	{
		printf("Memory allocation failed.\n");
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->name, name);

	newDog->owner = (char *)malloc(strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		printf("Memory allocation failed.\n");
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}
