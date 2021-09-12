#include <stdio.h>
#include <stdlib.h>
#define TAM_L 100
#define TAM_C 100

int main(){
	int A[TAM_L][TAM_C];
	int lin, col;
	int n;
	scanf("%d", &n);
	
	int nL = n,
	nC = n;
	
	for(lin=0;lin<nL;lin++){
		for(col=0;col<nC;col++){
			scanf("%d", &A[lin][col]);
		}
	}
	
	
	int i;
	
	for(i=0;i<n;i++){
			printf("%d\n", A[i][n-i-1]);
	}
	
	
	return 0;
}
