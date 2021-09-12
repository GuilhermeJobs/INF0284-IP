//
//  Matriz Ordenada
//  
//
//  Created by Guilherme Ferreira on 02/10/18.
//
//
#include <stdio.h>
#include <stdlib.h>
#define TAM 1000

void troca (int *x, int* y);

void imprimeMatriz(int a[TAM][TAM], int n);

void matriz_ordenada(int A[TAM][TAM], int tam, int col);

int main(){
	int M[TAM][TAM];
	int n, lin, col;
	scanf("%d", &n);
	
	for(lin=0;lin<n;lin++){
        for(col=0;col<n;col++){
            scanf("%d", &M[lin][col]);
        }
    }
    
	int c = n;
	while(c--){
		matriz_ordenada(M, n, c);
	}
	imprimeMatriz(M, n);
	return 0;
}

void imprimeMatriz(int a[TAM][TAM], int n){
	int lin, col;
	for(lin=0;lin<n;lin++){
        for(col=0;col<n;col++){
            printf("%d ", a[lin][col]);
        }
        printf("\n");
    }
    printf("\n");
}

void troca (int *x, int* y){
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

void matriz_ordenada(int A[TAM][TAM], int tam, int col){
	int lin, lin2;
	for(lin=0;lin<tam;lin++){
		for(lin2=0;lin2<tam;lin2++){
        	if(A[lin][col] < A[lin2][col]){
        	troca(&A[lin][col], &A[lin2][col]);	
			}
    	}
    }
}
