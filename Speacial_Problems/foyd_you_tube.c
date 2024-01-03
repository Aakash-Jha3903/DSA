#include <stdio.h>
#include <stdlib.h>
int a[10][10], d[10][10], n;

#define INF 99999

int min(int a, int b)
{
    return (a < b) ? a : b;
}
void path()
{
    int i, j, k;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}
int main()
{
    printf("Enter the number of vertices : ");
    scanf("%d", &n);

    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
            d[i][j] = a[i][j];
        }
    }

    path();
    printf("\n Shortest path matris is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }

    return 0;
}