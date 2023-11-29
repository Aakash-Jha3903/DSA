#include<stdio.h>

int main() {
    int r,c ;
    printf("Enter no. of rows of array :");
    scanf("%d",&r);
    printf("Enter no. of columns of array :");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the elements rowise :\n ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf(" %d",&a[i][j]);
        }
    }
    printf("Here is your Original array :\n ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" \t %d",a[i][j]);
        }
        printf("\n");
    }

    printf("Here is your X array :\n ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j || i+j==r-1){               
                printf(" \t %d",a[i][j]);
            }
            else{
                printf("\t ");
            }
        }
        printf("\n");
    }

    return 0;
}