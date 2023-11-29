#include<stdio.h>

int main() {
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
    printf("\nAt which position , you ant to insert :");
    scanf("%d",&pos);
    printf("\nEnter the insertion element : ");
    scanf("%d",&e);

    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=e;

    printf("Here is your inserted array \n ");
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}