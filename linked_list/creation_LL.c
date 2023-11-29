#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

int main() {
    int i,n;
    node *A,*B,*C,*Head=NULL;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input. Please enter a positive integer for the number of elements. \n");
    }

    // Consume the newline character from the input buffer
   // while (getchar() != '\n');



    for(i = 1 ; i <= n ; i++)
    {
        if(Head == NULL)
        {
            A=(node*)malloc(sizeof(node));
            Head=A;
            printf("Enter the value for new node : ");
            scanf("%d",&Head->data);
            Head->next=NULL;
        }
        else{
            A->next=(node*)malloc(sizeof(node));
            A = A->next;    //order matters ********
            A->next=NULL;
            printf("Enter the value for new node : ");
            scanf("%d", &A->data);
            
        }
    }
    printf("\nElements of linked list are : ");
    A=Head;
    while (A!= NULL)
    {
        printf ("%d \t ", A -> data );
        A = A -> next;
    }
    
    printf("\nAddress of linked list are : ");
    A=Head;
    while (A!= NULL)
    {
        printf ("%d \t ", &(A -> data) );
        A = A -> next;
    }
    // Free the allocated memory for the nodes
    // A = Head;
    // while (A != NULL) 
    // {
    //     node* temp = A;
    //     A = A->next;
    //     free(temp);
    // }

    
    return 0;

}
