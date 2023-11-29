#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    int i, n, ch, pos;
    node *p, *q,*c, *z, *head = NULL;
    node *current = head, *prev, *temp;

    printf("How many elements do you want in your Circular linked list : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the value for first node : ");
        scanf("%d", &p->data);
        if (head == NULL)
        {
            head = p;
            head->next = head;
        }
        else
        {
            c->next=p;
            p->next = head;
        }
        c=p;
    }

    printf("Original circular linked list : \n");
    p = head;
    do
    {
        printf("%d\t", p->data);
        p = p->next;
    } while (p != head);

    // Deletion of any node in circuular linked list.......................................
    if (head == NULL)
    {
        printf("List is empty !!\n");
    }
    else
    {
        printf("\nEnter the position to delete: ");
        scanf("%d", &pos);

        if (pos == 1)
        {
            // current = head;
            temp = head;
            while (temp->next != head) // to tranfer temp to the last node
            {
                temp = temp->next;
            }

            if (temp == head)
            {
                // The list is empty after deleting the FIRST node.
                head = NULL;
                printf("The list had one node, and it has been deleted.\n");
            }
            else
            {
                current = head;
                // Update head and the last node's 'next' to maintain the circular list.
                head = head->next;
                temp->next = head; // last node ke next address mai updated head ka address
            }
            free(current);
            current = head;
            do
            {
                printf("%d\t", current->data);
                current = current->next;
            } while (current != head);
        }
        else
        {
            current = head;
            int count = 1;

            do
            {
                prev = current;
                current = current->next;
                count++;

                if (count == pos)
                {
                    prev->next = current->next;
                    free(current);
                    break;
                }
            } while (current != head);

            if (current == head)
            {
                printf("position is out of range.\n");
            }
            else
            {
                printf("After deletion of %d node , elements of the circular linked list are : \n", count);
                current = head;
                do
                {
                    printf("%d\t", current->data);
                    current = current->next;
                } while (current != head);
            }
        }
    }

    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    //***********************************************************************************************************
    // Deletion of the first node......................................
    // printf("\nDo you want to Delete the first node(1) : ");
    // scanf("%d", &ch);
    if (ch == 1)
    {
        if (head->next == head)
        {
            free(p);
            head = NULL; // for single node *******************
            printf("First node Deleted ");
        }

        p = head;
        q = head;
        do
        {
            p = p->next;
        } while (p->next != head); // NOTE : as we have to stop at the last node

        p->next = head->next;
        head = head->next;
        free(q);

        printf("After deletion of the first node , elements of the circular linked list are : \n");
        p = head;
        do
        {
            printf("%d\t", p->data);
            p = p->next;
        } while (p != head);
    }

    // Deletion of the last node......................................
    // printf("\nDo you want to Delete the last node(9) : ");
    // scanf("%d", &ch);
    if (ch == 9)
    {
        p = head;
        if (p->next == head) // if Only one node is in the linked list
        {
            free(p);
            head = NULL; // for single node **************
            printf("First node Deleted ");
        }
        else
        {
            do
            {
                p = p->next;
            } while (p->next->next != head);

            z = p->next; // Order Matters********
            p->next = head;
            free(z);
        }

        printf("\nAfter deletion of the last node :\n ");
        q = head;
        do
        {
            printf("%d\t", q->data);
            q = q->next;
        } while (q != head);
    }

    // Deletion of the second node in circular linked list
    // printf("Do you want to delete the 2nd node(2): ");
    // scanf("%d", &ch);
    if (ch == 2)
    {
        p = head;
        q = p->next;
        p->next = q->next;
        free(q);

        z = head;
        do
        {
            printf("%d\t", z->data);
            z = z->next;
        } while (z != head);
    }

    // deletion of the second LAST node in Circular linked list
    // printf("\nDo you want to deleted the Second LAST node(8): ");
    // scanf("%d", &ch);
    if (ch == 8)
    {
        q = head;
        while (q->next->next->next != head)
        {
            // printf("%d\t",q->data);
            q = q->next;
        }
        z = q->next;
        q->next = z->next;
        free(z);
        printf("Deleted.........\n ");
        p = head;
        do
        {
            printf("%d\t", p->data);
            p = p->next;
        } while (p != head);
    }

    // printf("\n(D) Address of the nodes of circular linked list : \n ");
    // p = head;
    // do
    // {
    //     printf("%d\t", &(p->data));
    //     p = p->next;
    // } while (p != head);

    return 0;
}