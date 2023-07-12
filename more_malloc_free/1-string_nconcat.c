#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Write a function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: unsigned int n
 * Return: Nothing.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int resultLen, i, j;
	unsigned int len1;
	unsigned int len2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0, len2 = 0;
	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;
	if (n >= len2)
	n = len2;
	resultLen = len1 + n;
	result = (char *)malloc((resultLen + 1) * sizeof(char));
	if (result == NULL)
	return (NULL);
	for (i = 0; i < len1; i++)
	{
	result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';

	return (result);
}
