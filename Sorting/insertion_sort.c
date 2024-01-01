#include <stdio.h>
// inserion sort

void display_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertion_sort(int *arr, int n)
{
    int i, j, key;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) // copy/shifting bigger elements to the right
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Place the key at its correct position in the sorted sequence
    }
}
int main()
{
    int i, j, key, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    display_array(arr, n);

    insertion_sort(arr, n);

    printf("Sorted array:\n");
    display_array(arr, n);

    return 0;
}
