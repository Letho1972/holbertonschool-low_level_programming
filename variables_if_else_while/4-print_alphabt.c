#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - positif or negatif
 * Return: success
 */

int main(void)
{

	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		if (letter != 71 && letter != 65)
			putchar(letter);
	}
	putchar('\n');

return (0);
}
