#include <stdio.h>
#include <stdlib.h>
typedef struct deque
{
    int data;
    struct deque *next;
} deque;
int main()
{
    int ch;
    deque *p, *q, *z, *f = NULL, *r = NULL;
    do
    {
        printf("\n\n1 : Enqueue at front \n2 : Enqueue at rear \n3 : Dequeue at front \n4 : Dequeue at rear \n5 : Display \n6 : Exit \n");
        printf("Enter your choise :  ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 01:
            p = (deque *)malloc(sizeof(deque));
            printf("Enter the data : ");
            scanf("%d", &p->data);
            if (f == NULL)
            {
                f = r = p;
                r->next = NULL;
            }
            else
            {
                p->next = f;
                f = p;
            }
            break;
        case 2:
            p = (deque *)malloc(sizeof(deque));
            printf("Enter the data : ");
            scanf("%d", &p->data);
            if (f == NULL)
            {
                f = r = p;
                r->next = NULL;
            }
            else
            {
                r->next = p;
                r = p;
                r->next = NULL;
            }
            break;
        case 3:
            if (f == NULL)
            {
                printf("Nothing to delete in an empty DEQUE ! \n ");
            }
            else
            {
                if (f == r)
                {
                    z = f;
                    f = r = NULL;
                    printf("%d is dequeue ", z->data);
                    free(z);
                }
                else
                {
                    z = f;
                    f = f->next;
                    printf("%d is dequeue ", z->data);
                    free(z);
                }
            }
            break;
        case 4:
            if (f == NULL)
            {
                printf("Nothing to delete in an empty DEQUE ! \n ");
            }
            else
            {
                if (f == r)
                {
                    z = f;
                    f = r = NULL;
                    printf("%d is dequeue ", z->data);
                    free(z);
                }
                else
                {
                    z = r;
                    q = f;
                    while (q->next != r) // second last
                    {
                        q = q->next;
                    }
                    printf("%d is dequeue ", z->data);
                    free(z);
                    r = q;
                    r->next = NULL;
                }
            }
            break;
        case 5:
            if (f == NULL)
            {
                printf("Nothing to delete in an empty DEQUE ! \n ");
            }
            else
            {
                p = f;
                while (p != NULL)
                {
                    printf("%d\t", p->data);
                    p = p->next;
                }
                printf("\n");
            }
            break;
        case 6:
            printf("\nThank You\n");
            printf("Created by Aakash Jha ");
            printf("\n\n");
            exit(0);

        default:
            printf("Invalid input ! ");
        }
    } while (1);
    return 0;
}
