#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: new line
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
