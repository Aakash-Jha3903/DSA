/** C program for  Floyd Warshall algorithm to find the shortest paths between all 
 * pairs of vertices in a graph. */
#include <stdio.h>
#define INF 999999999

int main()
{
    // Initial code matrix Q
    // int n = 4; // Number of vertices
    // int graph[4][4] = {
    //     {INF, 2, 3, INF},
    //     {INF, INF, 1, INF},
    //     {INF, INF, INF, 5},
    //     {3, 4, INF, INF}};
    int graph[4][4] = { { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };
    
    int n=4;
    
    printf("The initial cost matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == INF)
            {
                printf("%7s", "INF");
                // printf("INF ");
                // printf("∞");
            }
            else
            {
                 printf("%7d", graph[i][j]);
                // printf("%d ", graph[i][j]);
            }
        }
        printf("\n");
    }

    // Floyd Warshall Algorithm .......
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (graph[i][k] != INF && graph[k][j] != INF && graph[i][k] + graph[k][j] < graph[i][j])
                {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }

    printf("Shortest Paths :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == INF)
            {
                printf("%7s", "INF");
                // printf("INF ");
                // printf("∞");
            }
            else
            {
                 printf("%7d", graph[i][j]);
                // printf("%d ", graph[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}