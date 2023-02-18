#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * countNodes - Counts the number of nodes available in loop
 * @head: constant list passed in
 *
 * Return: count of nodes present in loop
 *
 **/

int countNodes(const listint_t *head)
{
	int res = 1;
	const listint_t *temp = head;

	while (temp->next != head)
	{
		res++;
		temp = temp->next;
	}

	return (res);
}

/**
 * countNodesinLoop - detects and counts
 * loop nodes in the list
 * @head: constant list passed in
 *
 * Return: count of nodes present in loop, otherwise return 0
 *
 **/

int countNodesinLoop(const listint_t *head)
{
	const listint_t *slow_p = head, *fast_p = head;
	int count = 0;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p  = fast_p->next->next;

		/*
		 * If slow_p and fast_p meet
		 * at some point then there
		 * is a loop
		 **/

		if (slow_p == fast_p)
		{
			count = countNodes(slow_p);

			slow_p = head;
			while (slow_p != fast_p)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
				count++;
			}

			return (count);
		}
	}

	/*
	 * Return 0 to indicate that there
	 * is no loop
	 **/

	return (0);
}

/**
 * print_listint_safe - Prints safely List elements
 * @head: constant list passed in
 *
 * Return: the number of nodes in the list
 *
 **/

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;

	size_t count = 0;

	count = (size_t)countNodesinLoop(head);

	while (head)
	{
		printf("[%p] %d\n", (void *)&(head->n), head->n);

		head = head->next;

		node++;

		/*
		 * if there is no loop,count = 0 print
		 * to last member
		 **/
		if (node == count)
			break;
	}

	return (node);
}
