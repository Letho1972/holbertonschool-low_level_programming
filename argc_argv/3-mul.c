#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: new line
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");

		return (1);
	}
	{
		int num1 = atoi(argv[1]);

		int num2 = atoi(argv[2]);

		int result = (num1 * num2);


		printf("%d\n", result);
	}

	return (0);
}
