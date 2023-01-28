#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings  - Function to print variadic arguments
 * @n: Constant size of arguments
 * @separator: String to seaprate printed strings
 *
 * Return: Void
 *
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		if (!va)
		{
			printf("nil");

		} else
		{
			printf("%s", va_arg(va, char *));

		}

		if (separator && i < (n - 1))
		printf("%s", separator);
	}

	printf("\n");

	va_end(va);
}
