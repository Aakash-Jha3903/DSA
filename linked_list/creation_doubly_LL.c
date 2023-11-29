#include <stdio.h>
#include <stdlib.h>
// Creation of doubly linked list

typedef struct doubly_LL
{
    int data;
    struct doubly_LL *next, *prev;
} d;

int main()
{
    int i, n;
    d *p, *c, *head = NULL;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        p = (d *)malloc(sizeof(d));
        printf("Enter the element data :");
        scanf("%d", &p->data);
        if (head == NULL)
        {
            head = p;
            head->next = NULL;
            head->prev = NULL;
        }
        else
        {
            p->next = NULL;
            p->prev = c;
            c->next = p;
        }
        c = p; // new node address copied to the pointer p
    }

    printf("The elements of your doubly linked list are : \n");
    p = head;
    while (p != NULL)
    {
        printf("%d \t ", p->data);
        p = p->next;
    }
    // printf("\nThe address of elements of your doubly linked list are : \n");
    // p = head;
    // while (p != NULL)
    // {
    //     printf("\nprev = %p\t", (void *)&(p->prev));
    //     printf("data = %d\t", p->data);
    //     printf("data address = %p\t", (void *)&(p->data));
    //     printf("next = %p\t", (void *)&(p->next));
    //     p = p->next;
    // }

    // p=head;
    // while(p!=NULL){
    //     printf("\nprev= %d \t ",&(p->prev) );
    //     printf("\ndata =%d \t ",(p->data) );
    //     printf("\ndata add =%d \t ",&(p->data) );
    //     printf("\nnext= %d \t ",&(p->next) );
    //     p=p->next;
    // }
    return 0;
}