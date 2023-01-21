#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: parameter to function malloc_checked
 * Return: Returns a pointer to the allocated memory
 *
 **/

void *malloc_checked(unsigned int b)
{
	void *allocated;

	allocated  = malloc(b);

	if (!allocated)
		exit(98);

	return (allocated);
}
