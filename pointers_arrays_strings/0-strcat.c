#include "main.h"
#include <stdio.h>

/**
 * _strcat - overwriting the terminating null byte at the end of dest
 * @dest : the dest string
 * @src : the src string
 * Return: Always nothing.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
