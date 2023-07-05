#include "main.h"
/**
 * factorial - Write a function that returns the factorial of a given number
 * @n : n is lower
 * Return: to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
