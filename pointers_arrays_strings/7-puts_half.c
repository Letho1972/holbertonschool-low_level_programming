#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the second half of the string
 * @str : the second half of the string
 * Return: Always nothing.
 */
void puts_half(char *str)

{
	int length = 0;
	int half;

	while (str[length] != '\0')
		length++;


	for (half = (length / 2); str[half] != '\0'; half++)
		_putchar(str[half]);


	_putchar('\n');

}
