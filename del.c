#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch, data, f = -1, r = -1, max = 5;
    int CQ[max];
    do
    {
        printf("\n\n1:Enqueue \n2:Dequeue \n3:Display \n4:Exit \n");
        printf("Enter your choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if ((f == 0 && r == max - 1) || f == r + 1)
            {
                printf("Circular Queue is full .");
            }
            else
            {
                if (f == -1)
                {
                    f = 0;
                }
                r = (r + 1) % max;
                printf("Enter the data to be enqueue : ");
                scanf("%d", &data);
                CQ[r] = data;
            }
            break;
        case 2:
            if (f == -1)
            {
                printf("Circular Queue is empty");
            }
            else
            {
                if (f == r)
                {
                    f = r = -1;
                }
                printf("%d is dequeued", CQ[f]);
                f = (f + 1) % max;
            }
            break;
        case 3:
            if (f == -1)
            {
                printf("Circular Queue is empty");
            }
            else
            {
                int i = f;
                while (i <= r)
                {
                    printf("%d\t", CQ[i]);
                    i++;
                }
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