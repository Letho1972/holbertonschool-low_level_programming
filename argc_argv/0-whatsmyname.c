#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints its name
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: new line
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
