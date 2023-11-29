#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int data;
    struct stack *next;
} stack;
int main()
{
    int ch;
    stack *p, *q, *z, *top = NULL, *tail = NULL;
    do
    {
        printf("\n\n1:Push \n2:Pop \n3:Display \n4:Exit \n");
        printf("Enter your choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            p = (stack *)malloc(sizeof(stack));
            printf("Enter the data to be pushed : ");
            scanf("%d", &p->data); 
            if (top == NULL)
            {
                top = tail = p;
                top->next = top;
            }
            else
            {
                top = p;
                top->next = z;
                // z->next = top;
            }
            z = p;    //---**---**---**---**---**---**---
            tail->next = top; // NOTE for STACK [Circular LL] **************************
            printf("%d is pushed .", top->data);
            break;
        case 2:
            if (top == NULL)
            {
                printf("Underflow");
            }
            else
            {
                if (top->next == top) // only node
                {
                    p = top;
                    top = NULL;
                    tail = NULL;
                    printf("%d is popped .", p->data);
                    free(p);
                }
                else
                {
                    p = top;
                    top = top->next;
                    tail->next = top;
                    printf("%d is popped .", p->data);
                    free(p);
                }
            }
            break;
        case 3:
            if (top == NULL)
            {
                printf("Underflow");
            }
            else
            {
                printf("Elements of the stack (CLL) are : \n");
                p = top;
                do
                {
                    printf("%d \t", p->data);
                    p = p->next;
                } while (p != top);
            }
            break;
        case 4:
            printf("\nThank You\n");
            printf("Created by Aakash Jha ");
            printf("\n\n");
            exit(0);
        default:
            printf("Invalid input");
        }
    } while (1);

    return 0;
}