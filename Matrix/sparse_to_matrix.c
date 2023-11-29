#include <stdio.h>

int main() {
    int r, c, sp_size;

    // Input the number of rows, columns, and the number of non-zero values
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("Enter the number of non-zero values: ");
    scanf("%d", &sp_size);

    int sparseMatrix[sp_size][3]; // 3 columns for row, column, and value.......

    // Initialize the 2D array with zeros
    int array[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            array[i][j] = 0;
        }
    }

    // Input the sparse matrix elements one by one and update the 2D array
    for (int i = 0; i < sp_size; i++) {
        printf("Enter the row for element %d: ", i + 1);
        scanf("%d", &sparseMatrix[i][0]);
        printf("Enter the column for element %d: ", i + 1);
        scanf("%d", &sparseMatrix[i][1]);
        printf("Enter the value for element %d: ", i + 1);
        scanf("%d", &sparseMatrix[i][2]);

        // Update the 2D array
        array[sparseMatrix[i][0]][sparseMatrix[i][1]] = sparseMatrix[i][2];
    }

    printf("2D Array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}