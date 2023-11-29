#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next, *prev;
} node;
int main()
{
    int n, pos, i, ch;
    node *p, *q, *z, *c, *head = NULL;

    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the element data : ");
        scanf("%d", &p->data);

        if (head == NULL)
        {
            head = p;
            p->prev = NULL;
            p->next = NULL;
        }
        else
        {
            p->next = NULL;
            p->prev = c;
            c->next = p;
        }
        c = p;
    }
    printf("Elements of DLL are : \n");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\nEnter the pos for deletion : ");
    scanf("%d", &pos);
    i = 1;
    p = head;
    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position for deletion.\n");
        exit(1);
    }
    else
    {
        if (pos == 1)
        { // for first node
            p = head;
            head = head->next;
            head->prev = NULL;
            free(p);
        }
        while (i < pos)
        {
            z = p;
            p = p->next;
            i++;
        }
        if (pos == n)
        { // for last node
            z->next = NULL;
            free(p);
        }
        else
        { // for mid node
            z->next = p->next;
            p->next->prev = z->next;
            free(p);
        }
        printf("After deletion , Elements of DLL are : \n");
        p = head;
        while (p != NULL)
        {
            printf("%d\t", p->data);
            p = p->next;
        }
    }

    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************
    // **************************************************************************************************

    // printf("\nDo you want to delete the first element(1):");
    // scanf("%d", &ch);
    if (ch == 1)
    {
        p = head;
        // head->next=NULL;
        head = head->next;
        head->prev = NULL;
        free(p);

        printf("After deletion of first node , Elements of DLL are : \n");
        p = head;
        while (p != NULL)
        {
            printf("%d\t", p->data);
            p = p->next;
        }
    }
    // printf("\nDo you want to delete the last element(9):");
    // scanf("%d", &ch);
    if (ch == 9)
    {
        p = head;
        while (p->next->next != NULL)
        {
            printf("%d\t", p->data);
            p = p->next;
        }
        p->next = NULL;
        p = p->next;
        free(p);

        printf("\nAfter deletion of first node , Elements of DLL are : \n");
        p = head;
        while (p != NULL)
        {
            printf("%d\t", p->data);
            p = p->next;
        }
    }
    // printf("\nDo you want to delete the 2nd element(2):");
    // scanf("%d", &ch);
    if (ch == 2)
    {
        // head->next = head->next->next;
        p = head;
        p = p->next;
        q = p; // linking and deletion is simultaneously ****************
        p = p->next;
        head->next = p;
        p->prev = head;

        free(q);

        printf("\nAfter deletion of 2nd node , Elements of DLL are : \n");
        p = head;
        while (p != NULL)
        {
            printf("%d\t", p->data);
            p = p->next;
        }
    }

    return 0;
}