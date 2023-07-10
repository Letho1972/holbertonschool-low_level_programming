#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function returns a pointer and duplicate of the string
 * @str:  the string str
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int length = 0;
	char *duplicate = NULL;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc(length * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
