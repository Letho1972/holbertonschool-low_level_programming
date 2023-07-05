#include "main.h"
/**
 * _pow_recursion - Write a function that returns the value raised to the power
 * @x: x raised to the power y
 * @y: y the power
 * Return: to indicate an error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
