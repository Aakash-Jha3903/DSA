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

    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the element data: ");
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

    printf("Elements of DLL are: \n");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }

    printf("\nEnter the value to delete: ");
    int value_to_delete;
    scanf("%d", &value_to_delete);

    p = head;
    while (p != NULL)
    {
        if (p->data == value_to_delete)
        {
            if (p == head)
            {
                // Delete the first node
                head = p->next;
                if (head != NULL)
                    head->prev = NULL;
            }
            else
            {
                // Delete a node other than the first node
                p->prev->next = p->next;
                if (p->next != NULL)
                    p->next->prev = p->prev;
            }

            free(p);
            break; // Exit the loop after deleting the first occurrence of the value
        }
        p = p->next;
    }

    printf("After deletion, Elements of DLL are: \n");
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }

    return 0;
}
