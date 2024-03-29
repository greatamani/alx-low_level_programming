#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that iterates through provided array
 * @array: array pointer provided to iterate through its values
 * @size: Array size passed through
 * @action: pointer to function that acts upon the provided array
 *
 * Return: Void
 *
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
