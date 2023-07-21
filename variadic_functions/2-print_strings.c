#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Write a function that prints strings
 * @n: the numbers of strings
 * @separator: separator
 * Return: Always nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;
	char *letter;

	if (n > 0)

	{
		va_start(args, n);


		for (i = 0; i < n; ++i)
		{
			letter = va_arg(args, char *);
			if (letter == NULL)
			{
				printf("%s", "(nil)");
			}
			else
			{
				printf("%s", letter);
			}
			if (separator != NULL && i != n - 1)

				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
