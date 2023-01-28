#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "variadic_functions.h"

/**
 * print_numbers  - Function to sum variadic arguments
 * @n: Constant size of arguments
 * @separator: String to seaprate printed numbers
 *
 * Return: Void
 *
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);

	if (separator == NULL)
		exit(EXIT_SUCCESS);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (i < (n - 1))
		printf("%s", separator);
	}

	printf("\n");
}

int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}
