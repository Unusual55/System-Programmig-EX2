#include <stdio.h>
#include <limits.h>
#include <my_mat.h>

int dist[N];

void create_matrix()
{
    for (int i = 0; i < N; i++)
    {
        dist[i] = INT_MAX;
        for (int j = 0; j < N; j++)
        {
            matrix[i][j] = 0;
            scanf("%d", &matrix[i + N * j]);
        }
    }
}

void floyd_warshall()
{
    int vertex[N][N];
    for (int a = 0; a < N; a++)
    {
        for(int b=0;b<N;b++){
            if(a==b){
                vertex[a][b]=a;
            }
            else{
                vertex[a][b]=matrix[a][b];
            }
        }
    }
    for (int k = 0; k < N; k++)
    {
        for (int n = 0; n < N; n++)
        {
            for (int m = 0; m < N; m++)
            {
                if (matrix[n][m] > matrix[n][k] + matrix[k][m])
                {
                    matrix[n][m] = matrix[n][k] + matrix[k][m];
                    vertex[n][m] = vertex[n][k];
                }
            }
        }
    }
}