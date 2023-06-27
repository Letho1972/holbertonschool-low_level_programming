#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s : pointer to string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x >= 0)
	{
		if (s[x] != '\0')
		{
			_putchar(s[x]);
		}
		x--;
	}
	_putchar('\n');

}
