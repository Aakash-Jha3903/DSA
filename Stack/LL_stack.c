#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
int main()
{
    int i, n, ch;
    node *p, *q, *top = NULL;

    do
    {
        printf("\n\n1:Push \n2:Pop \n3:Display \n4:Exit \n");
        printf("Enter the choise : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            p = (node *)malloc(sizeof(node));
            printf("Enter the data to be pushed  : ");
            scanf("%d", &p->data);
            if (top == NULL)
            {
                top = p;
                top->next = NULL;
            }
            else
            {
                // p->next = q;
                p->next = top;
                top = p;
                // top->next=NULL;
            }
            printf("%d is pushed .", top->data);
            break;
        case 2:
            if (top == NULL)
            {
                printf("Underflow\n");
            }
            else
            {
                p = top;
                printf("%d is popped", p->data);
                top = top->next;
                free(p);
            }
            break;
        case 3:
            if (top == NULL)
            {
                printf("Underflow \nNothing to print\n");
            }
            else
            {
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
            printf("Created by Aakash Jha ");
            printf("\n\n");
            exit(0); // zero****************
            // break;
        default:
            printf("Invalid input ! ");
        }
    } while (1);
    return 0;
}