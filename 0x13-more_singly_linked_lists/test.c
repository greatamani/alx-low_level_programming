#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
 {
          listint_t *temp, *current;
          unsigned int nodex;
 
          current  = malloc(sizeof(listint_t));
 
          if (*head == NULL) /* account for no linked list */
                  return (NULL);
 
          nodex = 0;
 
          while (*head)
          {
                  if (nodex == idx)
                  {
                          printf("inside if\n");
 
                          temp = *head;
			 
                          current->n = n;
                          current->next = temp->next;
			  
 
                          temp->next = current;
 
                          printf("%d\n", current->n);
 
                          
 
                 }
 
                  printf("inside while\n");
 
                  *head =(*head)->next;
 
                  nodex++;
         }
 
          return (temp);
  }

