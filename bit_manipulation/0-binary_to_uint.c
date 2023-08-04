#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *@b: binary number
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)

{
	unsigned int result = 0;
	size_t i = 0;

	while (b[i] != '\0')
	{
		char currentDigit = b[i];

		if (currentDigit == '0' || currentDigit == '1')
		{
			int digitValue = currentDigit - '0';

			result = (result << 1) | digitValue;
			i++;
		}
		else
		{
			break;
		}
	}
	return (result);
}
