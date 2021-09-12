#include <stdio.h>
#include <stdlib.h>
#define TAM_L 10
#define TAM_C 10

int main(){
	double A[TAM_L][TAM_C];
	int lin, col, nL = 2, nC = 2;
	
	for(lin=0;lin<nL;lin++){
		for(col=0;col<nC;col++){
			scanf("%lf", &A[lin][col]);
		}
	}
	
/*	for(lin=0;lin<nL;lin++){
		for(col=0;col<nC;col++){
			printf("%.2lf\n", A[lin][col]);	
		}
	}*/
	
	double Deter = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
	
	printf("%.2lf\n", Deter);
	
	return 0;
}
