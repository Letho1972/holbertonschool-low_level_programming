#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - returned pointer should point to a newly allocated in memory
 * @s1: the contents of string
 * @s2: the contents of string
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, a, rap = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	a = len1 + len2;

	result = malloc((a + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	while (i < a)
	{
		result[i] += s2[rap];
		i++;
		rap++;
	}
	return (result);
}
