#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c:  Write a function that checks for uppercase character.
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
