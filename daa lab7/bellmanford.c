
#include <stdio.h>

#define INF 99999

struct Edge
{
    int src, dest, weight;
};

int main()
{
    int V, E, source;

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    scanf("%d", &E);

    struct Edge edges[E];

    printf("Enter source, destination and weight:\n");

    for (int i = 0; i < E; i++)
    {
        scanf("%d %d %d",
              &edges[i].src,
              &edges[i].dest,
              &edges[i].weight);
    }

    printf("Enter source vertex: ");
    scanf("%d", &source);

    int dist[V];

    // Initialize distances
    for (int i = 0; i < V; i++)
    {
        dist[i] = INF;
    }

    dist[source] = 0;

    // Relax all edges V-1 times
    for (int i = 1; i < V; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = edges[j].src;
            int v = edges[j].dest;
            int w = edges[j].weight;

            if (dist[u] != INF &&
                dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Check negative weight cycle
    for (int i = 0; i < E; i++)
    {
        int u = edges[i].src;
        int v = edges[i].dest;
        int w = edges[i].weight;

        if (dist[u] != INF &&
            dist[u] + w < dist[v])
        {
            printf("Negative weight cycle detected!");
            return 0;
        }
    }

    // Print shortest distances
    printf("\nShortest distances:\n");

    for (int i = 0; i < V; i++)
    {
        printf("Vertex %d = ", i);

        if (dist[i] == INF)
            printf("INF\n");
        else
            printf("%d\n", dist[i]);
    }

    return 0;
}
