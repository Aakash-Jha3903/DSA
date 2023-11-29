#include <stdio.h>
#include <stdlib.h>

typedef struct queue // FIFO .......................................
{
    int data;
    struct queue *next;
} queue;
int main()
{
    int i, n, ch;
    queue *p, *q, *z, *f = NULL, *r = NULL;

    do
    {
        printf("\n1:Enqueue \n2:Dequeue \n3:Display \n");
        printf("Enter your choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: // ignoring overflow.............
            if (f == NULL && r == NULL)
            {
                p = (queue *)malloc(sizeof(queue));
                p->next = NULL;
                printf("Enter the data for first node : ");
                scanf("%d", &p->data);
                f = p;
                r = p;
            }
            else
            {
                q = (queue *)malloc(sizeof(queue));
                r->next = q;
                printf("Enter the data for new node : ");
                scanf("%d", &q->data);
                q->next = NULL;
                r = q;
            }
            // p=q;
            break;
        case 2:
            if (f == NULL && r == NULL)
            {
                printf("Underflow\n");
            }
            else
            {
                if (f == r) // first node
                {
                    p = f;
                    q = r;
                    printf("%d is dequeued \n", p->data);
                    f = NULL;
                    r = NULL;
                    free(p);
                    free(q);
                }
                else
                {
                    p = f;
                    f = f->next;
                    printf("%d is dequeued \n", p->data);
                    free(p);
                }
            }
            break;
        case 3:
            if (f == NULL && r == NULL)
            {
                printf("Underflow\n");
            }
            else
            {
                printf("Elements of queue are : \n");
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
            printf("Try again..");
        }
    } while (1);

    return 0;
}