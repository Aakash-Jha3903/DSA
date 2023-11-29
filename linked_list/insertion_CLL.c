#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
int main()
{
    int i, ch, n, pos;
    node *p, *c, *z, *head = NULL;
    printf("Enter the no. of nodes : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the data for new node : ");
        scanf("%d", &p->data);
        if (head == NULL)
        {
            head = p;
            head->next = head;
        }
        else
        {
            c->next = p;
            p->next = head;
        }
        c = p;
    }
    printf("Elements of the CLL are : \n");
    p = head;
    do
    {
        printf("%d\t", p->data);
        p = p->next;
    } while (p != head);

    printf("\nEnter the position for insertion : ");
    scanf("%d", &pos);
    
    p = (node *)malloc(sizeof(node));
    printf("Enter the data for insertion : ");
    scanf("%d", &p->data);

    if (pos == 1) // first node........
    {
        i = 1;
        z = head;
        while (i < n)
        {
            z = z->next;
            i++;
        }
        z->next = p;
        p->next = head;
        head = p;
    }
    else if (pos == n) // last node.........
    {
        i = 1;
        z = head;
        while (i < n)
        {
            z = z->next;
            i++;
        }
        z->next = p;
        p->next = head;
    }
    else if (pos > 1 && pos < n) // mid insertion.........
    {
        z = head;
        i = 1;
        while (i < pos - 1)
        {
            z = z->next;
            i++;
        }
        p->next = z->next;
        z->next = p;
    }
    else
    {
        printf("invalid input for insertion ! ");
    }
    c = head;
    printf("\nAfter insertion , elements of the CLL are :\n ");
    do
    {
        printf("%d\t", c->data);
        c = c->next;
    } while (c != head);

    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    // printf("\nInsertion at the front of the CLL(1) : ");
    // scanf("%d", &ch);
    if (ch == 1)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the data for insertion at the front of CLL : ");
        scanf("%d", &p->data);
        i = 1;
        z = head;
        while (i < n)
        {
            z = z->next;
            i++;
        }
        z->next = p;

        p->next = head;
        head = p;

        printf("After insertion at the front , Elements of the CLL are :\n ");
        p = head;
        do
        {
            printf("%d\t", p->data);
            p = p->next;
        } while (p != head);
    }
    // printf("\nInsertion at the end in CLL(9) : ");
    // scanf("%d", &ch);
    if (ch == 9)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the data for last node : ");
        scanf("%d", &p->data);
        z = head;
        i = 1;
        while (i < n)
        {
            z = z->next;
            i++;
        }
        z->next = p;
        p->next = head;

        c = head;
        do
        {
            printf("%d\t", c->data);
            c = c->next;
        } while (c != head);
    }
    // printf("\nInsertion in the 2nd node in CLL(2) : ");
    // scanf("%d", &ch);
    if (ch == 2)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the data for insertion at 2nd pos : ");
        scanf("%d", &p->data);
        p->next = head->next;
        head->next = p;

        z = head;
        do
        {
            printf("%d\t", z->data);
            z = z->next;
        } while (z != head);
    }

    return 0;
}