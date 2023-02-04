#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Calculate the number of elements of a list_t list
 * @h: The list_t list
 * Return: The number of elements in given list h
 **/

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
