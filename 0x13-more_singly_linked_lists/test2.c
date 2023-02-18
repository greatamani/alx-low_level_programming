#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node* next;
};
 
/* Returns count of nodes present in loop.*/
int countNodes(const struct Node *n)
{
   int res = 1;
   const struct Node *temp = n;
   while (temp->next != n)
   {
      res++;
      temp = temp->next;
   }
   return res;
}
 
/* This function detects and counts
   loop nodes in the list. If loop
   is not there in then returns 0 */
int countNodesinLoop(const struct Node *list)
{
    const struct Node *slow_p = list,
                *fast_p = list;
 
    while (slow_p &&
           fast_p && fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p  = fast_p->next->next;
 
        /* If slow_p and fast_p meet
           at some point then there
           is a loop */
        if (slow_p == fast_p)
            return countNodes(slow_p);
    }
 
    /* Return 0 to indicate that there*/
    /* is no loop*/
    return 0;
}
 
struct Node *newNode(int key)
{
    struct Node *temp =
           (struct Node*)malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = NULL;
    return temp;
}
 
/* Driver code*/
int main()
{
    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
 
    /* Create a loop for testing*/
    head->next->next->next->next->next = head->next;
 
    printf("%d\n", countNodesinLoop(head));
    return 0;
}
