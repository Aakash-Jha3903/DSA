#include <stdio.h>
#include <stdlib.h>
// queue array..............................
int main()
{
    int f = -1, r = -1, ch, data, max;
    printf("Enter the maximum size of Queue: ");
    scanf("%d", &max);
    int q[max];
    do
    {
        printf("\n\n1:Enqueue \n2:Dequeue \n3:Display \n4:Exit \n");
        printf("Enter your choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (r == max - 1)
            {
                printf("Queue is full.");
            }
            else
            {
                printf("Enter the data to be enqueue : ");
                scanf("%d", &data);
                if (f == -1) // first node
                {
                    f = 0;
                }
                r++;
                q[r] = data;
                printf("%d enqueued to the queue.\n", data);
            }
            break;
        case 2:
            if (r == -1)
            {
                printf("Queue is empty.");
            }
            else
            {
                if (r == 0) // first node
                {
                    f = r = -1;
                }
                else
                {
                    printf("%d is dequeued", q[f]);
                    f++;
                }
            }
            break;
        case 3:
            if (f == -1)
            {
                printf("Queue is empty");
            }
            else
            {
                int i=f;
                while(i<=r) // r not max **********
                {
                    printf("%d\t",q[i]);
                    i++;
                }
            }
            break;
            case 4:
            printf("\nThank You\n");
            printf("Created by Aakash Jha ");
            printf("\n\n");
            exit(0);
        }
    } while (1);

    return 0;
}