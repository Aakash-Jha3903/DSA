#include<stdio.h>

int main(){
    int n,t,pos,e;
    printf("How many elements do you want to enter :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Here is your array \n ");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nEnter the position where do you want to perform deletion :");
    scanf("%d",&pos);
    for(int i=pos;i<=n-1;i++)
    {
        a[i-1]=a[i];
    }

    printf("Here is your array after deletion \n ");
    for(int i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}