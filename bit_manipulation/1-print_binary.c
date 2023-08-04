#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *@n: number
 * Return: Always 0.
 */
void print_binary(unsigned long int n)

{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bit_count = sizeof(unsigned long int) * 8;
	int i;

	for (i = 0; i < bit_count; i++)
	{
		if ((n & mask) != 0)
			putchar('1');
		else
			putchar('0');

		mask >>= 1;
	}

	putchar('\n');
}
