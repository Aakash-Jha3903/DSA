/**
 * This C program takes input from the user to create a linked list, then it reverses the linked list
 * and prints the elements in the reversed order.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
int main()
{
    int i, n;
    node *p, *A = NULL, *B, *C, *head = NULL;
    printf("Enter number of nodes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            p = (node *)malloc(sizeof(node));
            printf("Enter the value for first node: ");
            scanf("%d", &p->data);
            p->next = NULL;
            head = p;
        }
        else
        {
            p->next = (node *)malloc(sizeof(node));
            p = p->next;
            printf("Enter the value for new node : ");
            scanf("%d", &p->data);
            p->next = NULL;
        }
    }   
    printf("Elements of the likned list are : \n");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    A=NULL;
    B=head;
    C=B->next;
    while(B!=NULL)
    {
        B->next=A;
        A=B;
        B=C;
        if (C!=NULL)
        {
            C=C->next;
        }
        
    }
    head=A;     //yo*************

    printf("\nElements of the INVERTED likned list are : \n");
    printf("\n");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }



    return 0;
}