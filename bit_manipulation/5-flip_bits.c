#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *@n: number
 *@m: other number
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int xor_result = n ^ m;

	return (xor_result);
}
