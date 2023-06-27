#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every character , starting with the first character
 * @str :  pointer to a number string
 * Return: Always nothing.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
