#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Write a function that compares two strings
 * @s1 : the s1 string
 * @s2 : the s2 string
 * Return: Always nothing.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*((unsigned char *)s1 - *(unsigned char *)s2));
}
