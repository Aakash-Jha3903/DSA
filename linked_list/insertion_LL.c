#include <stdio.h>
#include <stdlib.h>
// creation of a simply linked list
typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    int i, n;
    node *z, *p, *q, *head = NULL;
    printf("Enter the numbers of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            p = (node *)malloc(sizeof(node));
            head = p;
            printf("Enter the value for first node : ");
            scanf("%d", &head->data);
            head->next = NULL;
        }
        else
        {
            // printf("p1= %d\n", p);
            p->next = (node *)malloc(sizeof(node));
            // printf("p2= %d\n", p);
            p = p->next; // order matters**** , p->next is not created so its address is 0
            // printf("p3= %d\n", p);
            printf("Enter the value for new node : ");
            scanf("%d", &p->data);
            p->next = NULL;
        }
    }
    // displaying the elements of the linked list
    printf("\nElements of linked list are :\n ");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", (p->data));
        p = p->next;
    }

    // insertion in the singly linked list ......................
    int ch, pos;
    printf("\nDo you want to insert an element in the linked list(11/0) : ");
    scanf("%d", &ch);
    if (ch == 11)
    {
        printf("At which position/location ,Do you want to insert an element in the linked list : ");
        scanf("%d", &pos);
        p = (node *)malloc(sizeof(node));
        printf("Enter the value for new node : ");
        scanf("%d", &p->data);

        q = head;    
        for (int i = 1; i <= (pos - 2); i++) // Main logic *********
        {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;

        printf("\nAfter insertion , Elements of linked list are :\n ");
        q = head;
        while (q != NULL)
        {
            printf("%d\t", q->data);  
            q = q->next;
        }
    }

    // insertion at the front in singly linked list ......................
    // printf("\nDo you want to insert an element in the front of the linked list(1/0) : ");
    // scanf("%d", &ch);
    if (ch == 1)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the element which will inserted at the front of linked list : ");
        scanf("%d", &p->data);
        p->next = head;
        head = p;

        // After insertion , displaying the elements of the linked list
        printf("\nAfter insertion , Elements of linked list are :\n ");
        p = head;
        while (p != NULL)
        {
            printf("%d\t", (p->data));
            p = p->next;
        }
    }

    //     printf("\nDo you want to insert an element at the end of the linked list(9/0) : ");
    //     scanf("%d", &ch);
    if (ch == 9)
    {
        z = (node *)malloc(sizeof(node));
        printf("Enter the element which will be inserted at the end of linked list : ");
        scanf("%d", &z->data);
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = z;
        z->next = NULL;

        // After insertion at the end , displaying all the elements of singly linked list..........
        printf("After insertion at the end , Here is your linked list :\n");
        p = head;
        while (p != NULL)
        {
            printf("%d\t", (p->data));
            p = p->next;
        }
    }

    //     printf("\nDo you want to insert an element at the 2nd location of the linked list(2/0) : ");
    //     scanf("%d", &ch);
    if (ch == 2)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the value for new node : ");
        scanf("%d", &p->data);
        q = head;
        p->next = head->next; // order matters , its next line cannot be interchanged !!!!!!!!
        head->next = p;

        printf("After insertion at 2nd location , Here is your linked list :\n");
        p = head;
        while (p != NULL)
        {
            printf("%d\t", (p->data));
            p = p->next;
        }
    }

    return 0;
}
