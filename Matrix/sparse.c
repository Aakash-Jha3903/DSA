#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the square matrix : ");
    scanf("%d", &n);
    int r = n, c = n;
    int m[r][c];
    int non_zero = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element [%d][%d] : ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    printf("This is your Original array :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t", m[i][j]);
            if (m[i][j] != 0)
            {
                non_zero++;
            }
        }
        printf("\n");
    }

    printf("\n non-zero-elem = %d \n", non_zero);
    int s[non_zero][3];
    int k = 1;
    // int k = 0;
    // int s[k][3] ;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] != 0)
            {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = m[i][j];
                k++;
            }
        }
    }
    s[0][2] = k - 1;
    // s[0][2] = k ;

    printf("Sparse matrix : \n");
    for (int i = 0; i <= k - 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if ((i == 0 && j == 0))
            {
                printf("r=%d\t", non_zero);
            }
            else if (i == 0 && j == 1)
            {
                printf("c=3\t");
            }
            else
            {
                printf("%d \t", s[i][j]);
            }
        }
        printf("\n");
    }

    int new[r][c]; // Initialize a new matrix of the same size og the original matrix

    // Initialize all elements of the original matrix to 0 , then we will edit the non-zero values
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            new[i][j] = 0;
        }
    }

    // Edit the new matrix using values from the sparse matrix
    for (int i = 1; i < non_zero + 1; i++)
    {
        int row = s[i][0];
        int col = s[i][1];
        int value = s[i][2];
        new[row][col] = value;
    }

    printf("Sparse to Original matrix :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", new[i][j]);
        }
        printf("\n");
    }

    return 0;
}