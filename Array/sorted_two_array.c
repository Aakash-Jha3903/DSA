#include <stdio.h>

int main()
{
    int i, j, a, b, c = 0;
    printf("Enter the size of first array : ");
    scanf("%d", &a);
    printf("Enter the size of second array : ");
    scanf("%d", &b);
    c = a + b;
    int arr1[a];
    int arr2[b];
    int arr3[c];

    printf("Enter the elements of first sorted array : ");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of of second sorted array : ");
    for (i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("This is your merged array : \n");
    for (i = 0; i < a; i++)
    {
        arr3[i] = arr1[i];
    }
    for (i = a; i < c ; i++)
    {
        arr3[i] = arr2[i - a];
    }

    for (i = 0; i < c ; i++)
    {
        printf("%d\t",arr3[i]);
    }

    return 0;
}