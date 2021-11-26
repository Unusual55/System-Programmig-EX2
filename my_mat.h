#ifndef MY_MAT_HEADER
#define MY_MAT_HEADER

#define TRUE 1
#define FALSE 0
#define N 10

extern int matrix[N][N];
extern int dist[N];

void create_matrix();


void floyd_warshall();

#endif