#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Prints List elements
 * @h: list passed in
 *
 * Return: number of nodes of unsinged long int
 *
 **/

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
