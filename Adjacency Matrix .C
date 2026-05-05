#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of vertices: 3");
    scanf("%d", &n);

    int adj[n][n];

    // Initialize matrix with 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    int edges;
    printf("Enter number of edges: 2");
    scanf("%d", &edges);

    int u, v;

    // Input edges
    printf("Enter edges (u v):\n");
    for (i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);

        adj[u][v] = 1;
        adj[v][u] = 1; // Remove this line for directed graph
    }

    // Print adjacency matrix
    printf("\nAdjacency Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}