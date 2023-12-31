#include "main.h"
#include <stdio.h>

/**
 * _strcpy - that copies the string pointed to by src
 * @dest : the buffer pointed to by dest
 * @src : the string pointed to by src
 * Return: Always nothing.
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

		*dest = '\0';


	return (original_dest);

}

