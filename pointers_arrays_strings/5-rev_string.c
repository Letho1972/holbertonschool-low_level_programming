#include "main.h"
#include <stdio.h>

/**
 * rev_string -  reverses a string
 * @s :  pointer to a string
 * Return: Always nothing.
 */
void rev_string(char *s)
{
	int i;
	int d = 0;
	int temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i = i - 1;
	while (d <= i)
	{
		temp = s[d];
		s[d] = s[i];
		s[i] = temp;
		i--;
		d++;
	}
}
