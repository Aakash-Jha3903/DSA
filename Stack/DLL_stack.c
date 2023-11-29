#include <stdio.h>
#include <stdlib.h>

typedef struct stack    //LIFO...................
{
    int data;
    struct stack *next, *prev;
} stack;

int main()
{
    int ch;
    stack *p, *q, *top = NULL; 

    do
    {
        printf("\n\n1:Push \n2:Pop \n3:Display \n4:Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            // Push operation
            p = (stack *)malloc(sizeof(stack));
            printf("Enter the data to be pushed: ");
            scanf("%d", &p->data);
            p->next = top;
            p->prev = NULL;
            if (top != NULL)
            {
                top->prev = p;
            }
            top = p;
            break;

        case 2:
            // Pop operation
            if (top == NULL)
            {
                printf("Underflow");
            }
            else
            {
                p = top;
                top = top->next;
                if (top != NULL)
                {
                    top->prev = NULL;
                }
                printf("%d is popped", p->data);
                free(p);
            }
            break;

        case 3:
            if (top == NULL)
            {
                printf("Underflow");
            }
            else
            {
                printf("Elements of Stack (DLL) are: \n");
                p = top;
                while (p != NULL)
                {
                    printf("%d\t", p->data);
                    p = p->next;
                }
            }
            break;

        case 4:
            printf("\nThank You\n");
            printf("Created by Aakash Jha\n\n");
            exit(0);
            // break;

        default:
            printf("Invalid input!");
        }
    } while (1);

    return 0;
}
