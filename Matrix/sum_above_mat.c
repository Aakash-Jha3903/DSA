#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    // Input the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix should be square for this operation.\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Here is your matrix \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d \t",matrix[i][j]);
            }
        printf("\n");
        }


    // sum of principal diagonal
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i < j) {
                sum += matrix[i][j];
            }
        }
    }

    // Print the sum
    printf("Sum of elements above the principal diagonal: %d\n", sum);

    return 0;
}