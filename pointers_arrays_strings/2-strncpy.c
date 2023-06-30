#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Write a function that copies a string
 * @dest : the dest string
 * @src : the src string
 * @n : n bytes from src
 * Return: Always nothing.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (dest_start);
}

