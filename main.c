#include<stdio.h>
#include "my_mat.h"
#include<limits.h>

int matrix[N][N];
int vertex[N][N];

int main(){
    char inp=' ';
    int i = 0;
    int j = 0;
    while(inp!='D'){
        scanf("%c", &inp);
        if(inp=='A'){
            create_matrix();
        }
        else if(inp=='B'||inp=='C'){
            scanf("%d", &i);
            scanf("%d", &j);
            floyd_warshall(i,j);
            if(inp=='B'){
                if(vertex[i][j]==0){
                    printf("False\n");
                }
                else{
                    printf("True\n");
                }
            }
            else{
                if(vertex[i][j]==0){
                    printf("-1\n");
                }
                else{
                    printf("%d\n", vertex[i][j]);
                }
            }
        }
        else if(inp == 'D'){
            break;
        }
    }
    return 0;
}