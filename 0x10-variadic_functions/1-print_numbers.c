#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers  - Function to sum variadic arguments
 * @n: Constant size of arguments
 * @separator: String to seaprate printed numbers
 *
 * Return: Void
 *
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);

	if (separator == NULL)
		exit(EXIT_SUCCESS);

	i = 0;

	while (i < n)
		printf("Numbers are: %d%s", va_arg(va, int), separator);

	_putchar('\n');
}
