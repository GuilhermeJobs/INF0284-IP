#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int Menor(int A[MAX][MAX], int a, int b);

int Maior(int A[MAX][MAX], int a, int b);

void trocaPosicao(int A[MAX][MAX], int a, int b, int m, int n);

void troca(int *x, int* y);

void imprimeMatriz(int A[MAX][MAX], int a, int b);

int main(){
	int M[MAX][MAX];
    int lin, col;
    int nL,
    nC,
    maior,
    menor;
    
    scanf("%d", &nL);
    scanf("%d", &nC);
	for(lin=0;lin<nL;lin++){
        for(col=0;col<nC;col++){
            scanf("%d", &M[lin][col]);
        }
    }
 
    menor = Menor(M, nL, nC);
    maior = Maior(M, nL, nC);
    trocaPosicao(M, nL, nC, menor, maior);
    imprimeMatriz(M, nL, nC);
	return 0;
}

int Maior(int A[MAX][MAX], int a, int b){
    int
    lin,
    col,
    k;//maior
    int teste = 0;
    for(lin=0;lin<a;lin++){
        for(col=0;col<b;col++){
            if(A[lin][col] > teste){
                k = A[lin][col];
                teste = A[lin][col];
            }
        }
    }
    return(k);
}
 
int Menor(int A[MAX][MAX], int a, int b){
    int
    lin,
    col,
    k;//menor
    int teste = 1000;
    for(lin=0;lin<a;lin++){
        for(col=0;col<b;col++){
            if(A[lin][col] < teste){
                k = A[lin][col];
                teste = A[lin][col];
            }
        }
    }
    return(k);
}

void trocaPosicao(int A[MAX][MAX], int a, int b, int m, int n){ //m menor, n maior
	int lin, col, i, j, l, k;
    for(lin=0;lin<a;lin++){
        for(col=0;col<b;col++){
            if(A[lin][col] == m){
			i = lin;
			j = col;
            }
            if(A[lin][col] == n){
            l = lin;
            k = col;
            }
        }
    }
troca(&A[i][j], &n);
troca(&A[l][k], &m);
}

void troca(int *x, int* y){
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;
}


void imprimeMatriz(int A[MAX][MAX], int a, int b){
	int lin, col;
	for(lin=0;lin<a;lin++){
        for(col=0;col<b;col++){
            printf("%d ", A[lin][col]);
        }
        printf("\n");
    }
    printf("\n");
}
