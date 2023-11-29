#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int data;
    struct queue *next;
} queue;
int main()
{
    int i, ch;
    queue *p, *q, *z, *f = NULL, *r = NULL;
    do
    {
        printf("\n\n1:Enqueue \n2:Dequeue \n3:Display \n4:Exit \n");
        printf("Enter your choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            p = (queue *)malloc(sizeof(queue));
            printf("Enter the data to be enqueue : ");
            scanf("%d", &p->data);
            if (f == NULL)
            {
                f = p;
                r = p;
                r->next = f;
            }
            else
            {
                r->next = p;
                r = p;
                r->next = f;
            }
            printf("%d is enqueued . ", p->data);
            break;
        case 2:
            if (f == NULL && r == NULL)
            {
                printf("Queue is empty!");
            }
            else
            {
                if (f == r) // queue has only one node
                {
                    q = f;
                    f = r = NULL;
                    printf("%d is dequeued", q->data);
                    free(q);
                }
                else
                {
                    q = f;
                    f = f->next;
                    r->next = f;    //circular ** 
                    printf("%d is dequeued", q->data);
                    free(q);
                }
            }
            break;
        case 3:
            if (f == NULL && r == NULL)
            {
                printf("Queue is empty!");
            }
            else
            {
                printf("Elements of the Queue (CLL) are : \n");
                z = f;
                do
                {
                    printf("%d \t", z->data);
                    z = z->next;
                } while (z != f);
            }
            break;
        case 4:
            printf("\nThank You\n");
            printf("Created by Aakash Jha ");
            printf("\n\n");
            exit(0);
        default:
            printf("Invalid choice! Please enter again.");
        }

    } while (1);

    return 0;
}