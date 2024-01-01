#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, ch, max, top = -1, data;
    printf("Enter the maximum size of stack : ");
    scanf("%d", &max);
    int stack[max];
    do
    {
        printf("\n\n1:Push \n2:Pop \n3:Display \n4:Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (top == max - 1)
            {
                printf("Overflow \nStack is full !");
            }
            else
            {
                printf("Enter the data to be pushed :");
                scanf("%d", &data);
                top++;
                stack[top] = data;
            }
            break;
        case 2:
            if (top == -1)
            {
                printf("Underflow \nStack is empty !");
            }
            else
            {
                printf("%d is popped", stack[top]);
                top--;
            }
            break;            
        case 3:
            if (top == -1)
            {
                printf("Underflow \nStack is empty !");
            }
            else
            {
                for (i = 0; i <= top; i++)
                {
                    printf("%d \t ", stack[i]);
                }
            }
            break;
        case 4:
            printf("Thank You\n");
            printf("Created by Aakash Jha");
            exit(0);
        default:
            printf("Invalid input ! \n Try again");
        }

    } while (1);

    return 0;
}