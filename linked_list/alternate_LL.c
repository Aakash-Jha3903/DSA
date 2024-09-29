#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    node *head = NULL, *p, *z, *c, *newhead = NULL;
    int i, n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the data for %d node : ", i + 1);
        scanf("%d", &p->data);

        if (head == NULL)
        {
            head = p;
            head->next = NULL;
        }
        else
        {
            z->next = p;
            p->next = NULL;
        }
        z = p;
    }
    printf("Original Linked List is : \n");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }

    printf("\nAlternate Linked List is : \n");
    if (head != NULL && head->next != NULL)     //should be more than one node in LL !
    {
        newhead = head;
        p = head;
        z = head;

        while (p != NULL && p->next != NULL)
        {
            p->next = z->next->next;
            z = z->next;
            p = p->next; // p=z;
        }
    }

    p = newhead;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    return 0;
}