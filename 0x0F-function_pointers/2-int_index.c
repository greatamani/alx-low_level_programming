#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for integers
 * @array: array pointer provided to iterate through its values
 * @size: Array size passed through
 * @cmp: pointer to function that acts upon the provided array
 *
 * Return: Always 0 (success)
 *
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
