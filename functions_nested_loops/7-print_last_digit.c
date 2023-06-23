#include "main.h"

/**
 * print_last_digit - Returns the value of the last digit
 * @n:  Returns the value of the last digit.
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		i *= -1;
		_putchar(i + '0');
		return (i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}
