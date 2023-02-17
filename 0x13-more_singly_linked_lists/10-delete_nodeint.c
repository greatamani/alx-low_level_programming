#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Function to delete list members
 * @head: existing list passed on
 * @index: Node index
 * Return: 1 if it succeeded, -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (*head == NULL) /* account for empty pointer */
	{
		free(*head);
		return (-1);
	}

	/* account for index 0 */
	tmp = *head;

	if (index == 0)
	{
		if (tmp == NULL) /* account for idx out of range */
		{
			free(tmp);
			return (-1);
		}
		*head = (*head)->next;
		return (1);
	}

	/* iterate to 1 before nth index to insert */
	while (i < (index - 1) || index == 1)
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL) /* account for idx out of range */
		{
			free(tmp);
			return (-1);
		}
	}

	/* link into list */
	tmp->next = tmp->next->next;
	return (1);
}