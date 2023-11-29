#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
} node;

int main()
{
    int i, n, ch, pos;
    node *p, *q, *z, *head = NULL;

    printf("How many elements do you want in your linked list : ");
    scanf("%d", &n);  
    for (i = 0; i < n; ++i)
    {
        if (head == NULL)
        {
            p = (node *)malloc(sizeof(node));
            printf("Enter the value for first node : ");
            scanf("%d", &p->data);
            head = p;
        }
        else
        {
            p->next = (node *)malloc(sizeof(node));
            p = p->next; // order matters ********
            p->next = NULL;
            printf("Enter the value for new node : ");
            scanf("%d", &p->data);
        }
    }

    printf("The elements of your singly linked list are : \n");
    q = head;
    while (q != NULL)
    {
        printf("%d\t", q->data);
        q = q->next;
    }

    // Deletion of node at a particular location/position......................
    printf("\nEnter the position/location which you want to delete : ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        p = head;
        head = head->next;
        free(p);
    }
    
    else
    {
        p = head;
        for (i = 0; i <= pos - 2; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        free(p);
    }

    p->next = p->next->next;
    p=p->next;
    free(p);

    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }

    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    //******************************************************************************************************
    // // Deletion of first node ...........
    // // printf("\nDo you want to delete the first node(1,0) : ");
    // // scanf("%d", &ch);
    // if (ch == 1)
    // {
    //     p = head;
    //     head = head->next;
    //     free(p);

    //     printf("After deletion of first node , The elements of your linked list are : \n");
    //     q = head;
    //     while (q != NULL)
    //     {
    //         printf("%d\t", q->data);
    //         q = q->next;
    //     }
    // }
    // // // Deletion of last node ...........
    // // printf("\nDo you want to delete the last node(9,0) : ");
    // // scanf("%d", &ch);
    // if (ch == 9)
    // {
    //     z = head;
    //     while (z->next != NULL)
    //     {
    //         p = z; // Order matters********
    //         z = z->next;
    //     }
    //     p->next = NULL;
    //     // p=z->next;
    //     free(z);

    //     printf("After deletion of last node , The elements of your linked list are : \n");
    //     q = head;
    //     while (q != NULL)
    //     {
    //         printf("%d\t", q->data);
    //         q = q->next;
    //     }
    // }

    // // Deletion of the 2nd node
    // //  printf("\nDo you want to delete the second node(2,0): ");
    // //  scanf("%d",&ch);
    // if (ch == 2)
    // {
    //     p = head;
    //     q = p->next;

    //     p->next = q->next;
    //     free(q);
    //     printf("After deletion of 2nd node , The elements of your linked list are : \n");
    //     q = head;
    //     while (q != NULL)
    //     {
    //         printf("%d\t", q->data);
    //         q = q->next;
    //     }
    // }
    // // Deletion of the 3rd node
    // //  printf("\nDo you want to delete the 3rd node(3): ");
    // //  scanf("%d",&ch);
    // if (ch == 3)
    // {
    //     p = head->next;
    //     q = p->next;

    //     p->next = q->next;
    //     free(q);
    //     printf("After deletion of 3rd node , The elements of your linked list are : \n");
    //     q = head;
    //     while (q != NULL)
    //     {
    //         printf("%d\t", q->data);
    //         q = q->next;
    //     }
    // }

    return 0;
}