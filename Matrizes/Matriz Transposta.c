#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int somaDiagonal(int A[MAX][MAX], int tam);

int main(){
	int M[MAX][MAX];
	int lin, col;
	int n = -1, tr;
	
	while(n > MAX || n < 1){
		scanf("%d", &n);
	}

	for(lin=0;lin<n;lin++){
		for(col=0;col<n;col++){
			scanf("%d", &M[lin][col]);
		}
	}
	
	tr = somaDiagonal(M, n);

	for(lin=0;lin<n;lin++){
		for(col=0;col<n;col++){
			printf("%d ", (tr * M[lin][col]) + M[col][lin]);
		}
		printf("\n");
	}
	
	return 0;
}

int somaDiagonal(int A[MAX][MAX], int tam){
	int soma;
	while(tam--){
		soma += A[tam][tam];
	}
	return(soma);
}
