#include <stdio.h>
#include <stdlib.h>
#define max 3

int CQ[max];
int f = -1, r = -1;

int isFull()
{
    // return (f == 0 && r == max - 1) || (f == r + 1);
    return (f == 0 && r == max - 1) || (r == f - 1);
    // return ((r == f - 1)%max); // wrong logic********
}

int isEmpty()
{
    return f == -1;
}

int main()
{
    int choice, data;
    do
    {
        printf("\n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to enqueue: ");
            scanf("%d", &data);
            if (isFull())
            {
                printf("Queue is full. Cannot enqueue %d\n", data);
            }
            else
            {
                if (f == -1) //first node 
                {
                    f = 0;
                }
                r = (r + 1) % max;
                CQ[r] = data;
                printf("%d enqueued to the queue.\n", data);
            }
            break;
        case 2:
            if (isEmpty())
            {
                printf("Queue is empty. Cannot dequeue.\n");
            }
            else
            {
                data = CQ[f];
                if (f == r) //first node 
                {
                    f = r = -1;
                }
                else
                {
                    f = (f + 1) % max;
                }
                printf("Dequeued: %d\n", data);
            }
            break;
        case 3:
            if (isEmpty())
            {
                printf("Queue is empty.\n");
            }
            else
            {
                int i = f;
                printf("f -> ");
                do
                {
                    printf("%d -> ", CQ[i]);
                    i = (i + 1) % max;      //****************
                } while (i != (r + 1) % max);
                printf("r\n");
            }
            break;
        case 4:
            printf("\nThank You\n");
            printf("Created by Aakash Jha ");
            printf("\n\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (1);
    return 0;
}
