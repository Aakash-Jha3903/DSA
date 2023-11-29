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
    node *p, *c, *head = NULL;

    printf("How many elements do you want in your circular linked list : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the value for new node : ");
        scanf("%d", &p->data);

        if (head == NULL)
        {
            head = p;
            p->next = head; // as it is a circular linked list
        }
        else
        {
            p->next = head;
            c->next=p;
        }
        c = p;    
    }
    printf("Original Circular linked list are : \n ");
    p = head;
    do
    {
        printf("%d\t", p->data);
        p = p->next;
    } while (p != head);

    return 0;
}