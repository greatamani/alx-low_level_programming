#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Function to sum list members
 * @head: existing list passed on
 * @idx: Node index
 * @n: List element
 *
 * Return: node
 *
 **/


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int nodex;

	newNode = malloc(sizeof(listint_t));

	newNode->n = n;

	if (*head == NULL) /* account for no linked list */
                  return (NULL);
	
	temp = *head;

	for (nodex = 1; nodex < idx; nodex++)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (temp);
}