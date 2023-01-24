#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function to print name
 * @name: Pointer to name argument passed to pritn name function
 * @f: Pointer to function argument passed
 *
 * Return: Void
 *
 **/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)

	f(name);
}
