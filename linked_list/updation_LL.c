#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
} node;

int main()
{
    node *p, *q, *z, *head = NULL;
    int i, n, ch, pos, uv;

    printf("How many nodes do you want in your linked list : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            p = (node *)malloc(sizeof(node));
            head = p;
            p->next = NULL;
            printf("Enter the value for new node : ");
            scanf("%d", &p->data);
        }
        else
        {
            p->next = (node *)malloc(sizeof(node));
            p = p->next;
            p->next = NULL;
            printf("Enter the value for new node : ");
            scanf("%d", &p->data);
        }
    }
    printf("Original linked list : \n ");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }

    printf("\nEnter the position/location of the node for UPDATION : ");
    scanf("%d", &pos);
    printf("Enter the updated value : ");
    scanf("%d", &uv);

    p = head;
    for (i = 1; i <= pos - 2; i++)  //it reached to one step back***************
    {
        p = p->next;
    }
    p->next->data = uv;     //Wow *******************

    printf("Updated linked list : \n ");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    return 0;
}