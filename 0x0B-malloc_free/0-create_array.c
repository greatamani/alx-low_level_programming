#include <stdio.h>
#include "main.h"

/**
 * create_array - an array of chars, and initializes it with a specific char
 * @size: array size argument
 * @c: character passed to function
 *
 * Return: pointer to an array *
 *
 **/

char *create_array(unsigned int size, char c)
{
	char *a;

	a = malloc(s * sizeof(char));
	
	if( size == 0 || a == NULL)
	{
		free(a);
		return (NULL);
	}

	while (size--)
		*(a + size) = c;

	return (a);
}
