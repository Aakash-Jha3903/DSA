/**
 * This is a program that implements a queue using a doubly linked list.
 *
 *  */
#include <stdio.h>
#include <stdlib.h>

typedef struct queue // FIFO ...................
{
    int data;
    struct queue *next, *prev;
} queue;
int main()
{
    int ch;
    queue *p, *q, *f = NULL, *r = NULL;
    do
    {
        printf("\n\n1:Enqueue \n2:Dequeue \n3:Display \n4:Exit \n");
        printf("Enter your choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (f == NULL && r == NULL) // ignoring the overflow.........
            {
                p = (queue *)malloc(sizeof(queue));
                printf("Enter the data to be enqueued : ");
                scanf("%d", &p->data);
                p->next = NULL;
                p->prev = NULL;
                f = p;
                r = p;
            }
            else
            {
                q = (queue *)malloc(sizeof(queue));
                printf("Enter the data to be enqueued : ");
                scanf("%d", &q->data);
                r->next = q;
                r = q;
                r->next = NULL;
            }
            break;
        case 2:
            if (f == NULL && r == NULL)
            {
                printf("Underflow");
            }
            else
            {
                if (f == r) // first(one) node only.......
                {
                    p = f;
                    f = NULL;
                    r = NULL;
                    printf("%d is dequeued ", p->data);
                    free(p);
                }
                else
                {
                    p = f;
                    f = f->next;
                    f->prev = NULL;
                    printf("%d is dequeued ", p->data);
                    free(p);
                }
            }
            break;
        case 3:
            if (f == NULL && r == NULL)
            {
                printf("Underflow");
            }
            else
            {
                printf("Elements of Queue (DLL) are : \n");
                p = f;
                while (p != NULL)
                {
                    printf("%d \t", p->data);
                    p = p->next;
                }
            }
            break;
        case 4:
            printf("\nThank You\n");
            printf("Created by Aakash Jha ");
            printf("\n\n");
            exit(0); // zero****************
            // break;
        default:
            printf("Inavalid input !");
        }
    } while (1);
    return 0;
}