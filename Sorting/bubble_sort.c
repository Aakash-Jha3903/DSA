#include <stdio.h>
// Bubble Sort in C

void display_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
void bubble_sort_adaptive(int *arr, int n)
{
    int i, j, temp;
    int isSorted = 0;
    for (i = 0; i < n - 1; i++) // for number of passes
    {
        isSorted = 1;
        // printf("pass %d \n", i + 1);
        for (j = 0; j < n - 1 - i; j++) // for comparision in each pass
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
void bubble_sort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) // for number of passes
    {
        printf("pass %d \n", i + 1);
        for (j = 0; j < n - 1; j++) // for comparision in each pass
        // for (j = 0; j < n ; j++) // for comparision in each pass
        // for (j = 0; j < n - 1 - i; j++) // for comparision in each pass
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            display_array(arr, n);
            printf("\n");
        }
    }
}
int main()
{
    int n = 5;
    // int i, n;
    // printf("Enter the size of array : ");
    // scanf("%d", &n);
    // int arr[n];
    int arr[] = {2, 6, 3, 5, 1};
    // printf("Enter the array elements : \n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("Enter the element[%d] : ", i + 1);
    //     scanf("%d", &arr[i]);
    // }
    printf("This is your original array : \n");
    display_array(arr, n);

    bubble_sort(arr, n);
    // bubble_sort_adaptive(arr, n);

    printf("This is your sorted array : \n");
    display_array(arr, n);

    return 0;
}