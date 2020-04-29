#include <stdio.h>

typedef struct d_l_l
{
    struct d_l_l *prev;
    int val;
    struct d_l_l *next;
} doubly_linked_list; //alias for doubly linked list structure

int main()
{
    doubly_linked_list *head, *nex; //create pointers to structure for doubly linked list.
    head->val = 5;                  //assign value to doubly linked list
    nex->val = 6;
    head->next = nex;                //assign pointer to next node of head node.
    nex->prev = head;                //assign pointer to previous node of node next to head node.
    printf("%i\n", head->next->val); //print val of node next to head node.
    return 1;
}