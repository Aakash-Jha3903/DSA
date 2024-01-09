/**
 * This C program takes a matrix as input and uses the Warshall algorithm to compute the transitive
 * closure of the matrix.
 */
#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the number of vertices : ");
    scanf("%d", &n);
    int g[n][n];

    printf("Enter the elements : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d] : ", i, j);
            scanf("%d", &g[i][j]);
        }
    }
    // int cost[4][4] = {{0, 3, 999, 4}, {8, 0, 2, 999}, {5, 999, 0, 1}, {2, 999, 999, 0}}; 
	// int n = 4;
    
    printf("This is your initial matrix : \n");
    ;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%7d ", g[i][j]);
            // printf("%d ", g[i][j]);
        }
        printf("\n");
    }

    // Warshall algorithm ......
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (g[i][j] || g[i][k] && g[k][j])
                {
                    g[i][j] = 1;
                }
            }
        }
    }
    printf("\n\nThis is transitive closure matrix : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%7d ", g[i][j]);
            // printf("%d ", g[i][j]);
        }
        printf("\n");
    }
    return 0;
}