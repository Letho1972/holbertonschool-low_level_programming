#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *@n: number
 *@index: index
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned long int bitmask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}


	return ((n & bitmask) ? 1 : 0);
}
