#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Function togett nth node in list
 * @head: existing list passed on
 * @index: nth node in the list
 *  
 * Return: node
 *
 **/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int nth;

	if (head == NULL) /* account for no linked list */
		return (NULL);

	nth = 0;

	while (head)
	{
		if (nth == index)
		{
			tmp = head;
			return (tmp);
		}

		head = head->next;

		nth++;
	}

	return (head);
}
