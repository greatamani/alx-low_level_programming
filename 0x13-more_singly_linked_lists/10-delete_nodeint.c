#include <stdio.h>
#include <stdlib.h>
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
	listint_t *tmp, *tmp1;

	if (*head == NULL) /* account for empty pointer */
	{
		return (-1);
	}

	/* account for index 0 */
	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	/* iterate to 1 before nth index to insert */
	while (i < (index - 1) && tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (i != (index - 1) || tmp->next == NULL)
		return (-1);

	/* link into list */
	tmp1 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp1);

	return (1);
}
