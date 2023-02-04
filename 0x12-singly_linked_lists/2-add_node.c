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
	int length;
	list_t *new_str;

	new_str  = malloc(sizeof(list_t));

	if (new_str == NULL)
		return (NULL);
	
	dup = strdup(str);

	if (dup == NULL)
		free(new_str);
		return (NULL);

	for (length = 0; str[length]; )
		length++;

	new_str->str = dup;
	new_str->len = length;
	new_str->next = *head;

	*head = new_str;

	return (new_str);

}