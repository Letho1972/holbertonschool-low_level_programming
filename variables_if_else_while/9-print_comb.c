#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - positif or negatif
 * Return: success
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	
	if (i != 57)
	{		putchar(',');
			putchar(' ');
	}
	

	}
	return (0);
}
