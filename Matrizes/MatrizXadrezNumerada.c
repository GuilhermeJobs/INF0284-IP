#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
	int M[MAX][MAX];
	int lin, col;
	int nL = -1, nC = -1;

	scanf("%d", &nL);
	scanf("%d", &nC);
	//printar define um cont, se cont for par = n+1 se for impar = 0
	int cont = 0; int c = 0; int n = 0;
	for(lin=0;lin<nL;lin++){
		for(col=0;col<nC;col++){
			if(cont % 2 == 0){
				printf("0 ");
				c = 1;
			}else{
				printf("%d ", n + 1);
				c = 0;
				n++;
			}
			cont++;	
		}
		printf("\n");
		if(nC % 2 != 0)
			if(c % 2 == 0){
				cont = 0;
			}else{
				cont = 1;
			}
		if(nC % 2 == 0){
			if(c % 2 == 0){
				cont = 1;
			}else{
				cont = 0;
			}
		}
	}
	
	return 0;
}
