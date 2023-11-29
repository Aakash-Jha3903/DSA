#include <stdio.h>

int main()
{
    int size1, size2;
    printf("Enter the size of the first sorted array: ");
    scanf("%d", &size1);

    printf("Enter the size of the second sorted array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], merged[size1 + size2];

    printf("Enter elements for the first sorted array in ascending order:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for the second sorted array in ascending order:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merge the two sorted arrays
    int i = 0, j = 0, k = 0;

    // This logic will work only when both array is not exhausted !!
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[k] = arr1[i];
            i++;
            // k++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
            // k++;
        }
        k++;
    }

    // Copy the remaining elements if any
    while (i < size1)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged sorted array:\n");
    for (i = 0; i < size1 + size2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}