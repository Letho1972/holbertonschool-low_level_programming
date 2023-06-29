#include "main.h"
#include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings
 * @dest : the dest string
 * @src : the src string
 * @n : n bytes from src
 * Return: Always nothing.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
		while (*dest != '\0')
		{
			dest++;
		}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (result);
}
