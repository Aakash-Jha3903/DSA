#include <stdio.h>

void display_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high + 1;
    int temp;
    do
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);
    if (low < high)
    {
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
    }

    return j;
}
void quick_sort(int arr[], int low, int high)
{
    int partitionIndex; // index of pivot acfter partition
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quick_sort(arr, low, partitionIndex - 1);  // sort left subarray
        quick_sort(arr, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    // int arr[] = { 2, 5, 3, 13, 12, 10, 20};
    // int n = 7;

    int i, n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the element[%d] : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("This is your original array : \n");
    display_array(arr, n);
    quick_sort(arr, 0, n - 1);
    printf("\nSorted array is : \n");
    display_array(arr, n);
    return 0;
}