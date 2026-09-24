#include <stdio.h>

void prim(int n, int graph[n][n])
{
    int selected[n];
    int totalCost = 0;

    for (int i = 0; i < n; i++)
    {
        selected[i] = 0;
    }

    selected[0] = 1;

    printf("Edges in Minimum Spanning Tree:\n");

    for (int edges = 0; edges < n - 1; edges++)
    {
        int min = 0;
        int x = -1;
        int y = -1;

        for (int i = 0; i < n; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (!selected[j] && graph[i][j] != 0)
                    {
                        if (min == 0 || graph[i][j] < min)
                        {
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

        printf("%d - %d : %d\n", x, y, graph[x][y]);

        totalCost += graph[x][y];
        selected[y] = 1;
    }

    printf("Minimum Cost = %d\n", totalCost);
}

int main()
{
    int n;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n];

    printf("Enter adjacency matrix:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    prim(n, graph);

    return 0;
}