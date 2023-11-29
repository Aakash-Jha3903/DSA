#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    // Declare the 2D matrix
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
    
    // sum of elements below the principal diagonal
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i > j) {
                sum += matrix[i][j];
            }
        }
    }
    
    // Print the sum
    printf("Sum of elements below the principal diagonal: %d\n", sum);
    
    return 0;
}
