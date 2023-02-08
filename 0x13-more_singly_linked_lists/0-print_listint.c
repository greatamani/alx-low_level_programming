#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints List elements
 * @h: list passed in
 *
 * Return: size_t of unsinged long int
 *
 **/

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);

		node++;
		h = h->next;
	}

	return (node);
}
