#ifndef MY_MAT_HEADER
#define MY_MAT_HEADER

#define TRUE 1
#define FALSE 0
#define N 3

extern int matrix[N][N];
extern int vertex[N][N];

void create_matrix();

void floyd_warshall();

#endif