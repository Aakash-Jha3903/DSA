
#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    int i, n;
    node *p, *head = NULL, *newHead = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            p = (node *)malloc(sizeof(node));
            head = p;
            printf("Enter the value for the first node: ");
            scanf("%d", &head->data);
            head->next = NULL;
        }
        else
        {
            p->next = (node *)malloc(sizeof(node));
            p = p->next;
            printf("Enter the value for the new node: ");
            scanf("%d", &p->data);
            p->next = NULL;
        }
    }

    // Displaying original linked list
    printf("\nOriginal linked list:\n ");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }

    // Creating a new linked list with alternate elements
    if (head != NULL && head->next != NULL)
    {
        newHead = head->next;
        p = head;

        while (p != NULL && p->next != NULL)
        {
            node *temp = p->next;
            p->next = p->next->next;
            p = temp;
        }
    }

    // Displaying the new linked list
    printf("\nNew linked list with alternate elements:\n");
    p = newHead;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }

    return 0;
}