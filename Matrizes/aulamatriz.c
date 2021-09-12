#include <stdio.h>
#include <stdlib.h>
#define MAX 3

void lermatriz(int A[MAX][MAX], int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d", &A[i][j]);
        }
    }
}

void maior(int A[MAX][MAX], int n, int *mai, int *Lin, int *Col){
    int i, j;
    int maximo = A[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i][j]>maximo){
                maximo = A[i][j];
                *Lin = i;
                *Col = j;
            }
        }
    }
    *mai = maximo;
}

int main(){
    int A[MAX][MAX];
    int mai, linha, coluna;
    
    lermatriz(A, MAX);
    maior(A, MAX, &mai, &linha ,&coluna);
    
    printf("%d\n%d\n%d\n", mai, linha, coluna);
    
}
