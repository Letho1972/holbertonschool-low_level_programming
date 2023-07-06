#include "main.h"
/**
 * perfect - Write a function that returns the natural square a number
 * @a: a value of n
 * @r: result
 * Return: to indicate an error
 */
int perfect(int r, int a)
{
	if (a * a == r)
	{
		return (a);
	}
	else if (a * a > r)
	{
		return (-1);
	}
	else
	{
		return (perfect(r, a + 1));
	}
}
/**
 *  _sqrt_recursion - Write a function that returns the natural square a number
 * @n: n does not have a natural square
 * Return: to indicate an error
 */
int _sqrt_recursion(int n)
{
	{
		return (perfect(n, 1));

	}
}
