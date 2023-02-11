#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Function to add node at the begining
 * @head: existing list passed on
 * @n: List integer elements
 *
 * Return: Listint_t list
 *
 **/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode  = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	temp = *head;

	if (temp == NULL)
	{	*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
