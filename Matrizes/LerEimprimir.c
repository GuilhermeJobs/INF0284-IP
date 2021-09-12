#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
	int M[MAX][MAX];
	int lin, col;
	int nL = -1, nC = -1;
	//verificar se os numeros das linhas e colucas são validos
	while(nL > MAX || nL < 1){
		scanf("%d", &nL);
	}
	while(nC > MAX || nC < 1){
		scanf("%d", &nC);
	}
	//ler
	for(lin=0;lin<nL;lin++){
		for(col=0;col<nC;col++){
			scanf("%d", &M[lin][col]);
		}
	}
	//printar
	for(lin=0;lin<nL;lin++){
		printf("linha %d: ", lin+1);
		for(col=0;col<nC;col++){
			printf("%d", M[lin][col]);
			if(col < nC -1){
				printf(",");
			}
		}
		printf("\n");
	}
	
	return 0;
}
