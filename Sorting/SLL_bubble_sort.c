#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

// Function to perform bubble sort on a linked list
void bubbleSort(node *head)
{
    int swapped;
    node *ptr;
    node *last = NULL;

    // Check if the linked list is empty
    if (head == NULL)
        return;

    do
    {
        swapped = 0;
        ptr = head;

        // while (ptr->next != last)
        while (ptr->next != NULL)
        {
            if (ptr->data > ptr->next->data)
            {
                // Swap data of the current and next nodes
                int temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;

                swapped = 1;
            }
            ptr = ptr->next;
        }
        // last = ptr;
    } while (swapped);  //if no swapping is take place, it means values are Already Sorted.
}

// Function to display elements of the linked list
void displayList(node *head)
{
    node *current = head;
    while (current != NULL)
    {
        printf("%d\t", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    int i, n;
    node *p, *z, *head = NULL;

    // Input: creation of a singly linked list
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the value for new node : ");
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

        // @ChatGPT Code, similar to stack *****
        // p = (node *)malloc(sizeof(node));
        // printf("Enter the value for node %d: ", i + 1);
        // scanf("%d", &p->data);
        // p->next = head;
        // head = p;
    }

    // Display original linked list
    printf("\nOriginal linked list:\n");
    displayList(head);

    // Sorting the linked list
    bubbleSort(head);

    // Display sorted linked list
    printf("\nLinked list after sorting:\n");
    displayList(head);

    return 0;
}
