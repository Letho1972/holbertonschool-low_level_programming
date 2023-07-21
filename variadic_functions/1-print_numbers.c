#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Write a function that prints numbers
 * @n: all numbers
 * @separator: separator
 * Return: Always nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;

	if (n > 0)

	{
		va_start(args, n);


		for (i = 0; i < n; ++i)
		{
			printf("%d", va_arg(args, int));

			if (separator != NULL && i != n - 1)

				printf("%s", separator);
		}
		va_end(args);
	}

	printf("\n");

}
