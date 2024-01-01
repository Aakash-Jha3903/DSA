// selection sort ....

#include <stdio.h>

void dis_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

void selection_sort(int *arr, int n)
{
    int min_index, temp, swap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        // swap = 0;  // Reset swap for each iteration

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
                swap = 1;
            }
        }
        if (swap == 1)
        {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}
int main()
{
    int i, n;
    printf("Enter the size of your array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements :\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements[%d] :", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("This is your original array :\n");
    dis_array(arr, n);
    selection_sort(arr, n);

    printf("This is your sorted array :\n");
    dis_array(arr, n);

    return 0;
}