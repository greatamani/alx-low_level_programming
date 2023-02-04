#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds new node at the beginning of a list head
 * @head: The list_t list
 * @str: String to be added to the list
 * Return: The number of elements in given list h
 **/

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new  = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	
	dup = strdup(str);

	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len]; )
		len++;

	new->str = dup;
	new->len = length;
	new->next = *head;

	*head = new;

	return (new);

}
