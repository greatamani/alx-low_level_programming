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


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode  = malloc(sizeof(listint_t));

	if (newNode == NULL)
		printf("NULL");

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
