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
    node *head = NULL, *newhead = NULL, *p, *z;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Create the original linked list
    for (i = 0; i < n; i++)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &(p->data));
        p->next = NULL;

        if (head == NULL)
        {
            head = p;
        }
        else
        {
            z->next = p;
        }
        z = p; // z points to the last node
    }

    // Print the original linked list
    printf("Your Original Linked List is: \n");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");

    // Create the alternate linked list
    printf("Alternate Linked List:\n");
    newhead = NULL;
    p = head;
    i = 1;             // i=1 for even-pos and i=0 for odd-pos
    while (p != NULL)
    {
        if (i % 2 == 0) // If the index is even
        {
            if (newhead == NULL)
            {
                newhead = p;
                // newhead->next=NULL;
            }
            else
            {
                z->next = p;

                // p->next=NULL;    // i am not creating ! i am traversing
                // z=z->next;

                // z->next=NULL;
                // z = p;
            }
            z = p;          // z points to the last node
            p = p->next;    // Move to the next node-------------------order matters**********?????????
            z->next = NULL; // Set next of the last node to NULL
        }
        else
        {
            p = p->next;
        }
        i++;
    }

    // Print the alternate linked list
    p = newhead;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");

    // Free memory
    p = head;
    while (p != NULL)
    {
        node *temp = p;
        p = p->next;
        free(temp);
    }

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node
// {
//     int data;
//     struct node *next;
// } node;
// int main()
// {
//     int i, c, n;
//     node *head = NULL, *newhead = NULL, *p, *z;
//     printf("Enter the number of nodes : ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         p = (node *)malloc(sizeof(node));
//         if (head == NULL)
//         {
//             head = p;
//             head->next = NULL;
//         }
//         else
//         {
//             z->next = p;
//             p->next = NULL;
//         }
//     }
//     z = p;
//     printf("Your Original Linked List is : \n");
//     p = head;
//     while (p != NULL)
//     {
//         printf("%d\t", p->data);
//         p = p->next;
//     }
//     printf("Alternate(even) Linked list :\n");
//     newhead = NULL;
//     z = head;
//     p = head;
//     c = 1;
//     // while (c<=n)
//     while (p != NULL && p->next != NULL)
//     {
//         if (newhead == NULL)
//         {
//             newhead = head->next;
//             newhead->next = NULL;
//             p = newhead;
//             z = newhead;
//             c = 2;
//         }
//         else
//         {

//         }
//     }

//     return 0;
// }
