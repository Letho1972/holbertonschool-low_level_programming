#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Write a program that adds positive numbers
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: new line
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int result = 0;
	int number = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		number = atoi(num);

		if (number <= 0)
		{
			printf("Error\n");
			return (1);
		}

		result += number;
	}
	printf("%d\n", result);


	return (0);
}
