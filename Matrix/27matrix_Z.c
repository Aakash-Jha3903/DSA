/**
 * This program takes input for the number of rows and columns of an array, then fills the array with
 * user input, and finally prints the original array and a modified "Z" array.
 */
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

    printf("Here is your Z array :\n ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){           
            if(i == 0 || i == r - 1 || i + j == r - 1 ){               
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