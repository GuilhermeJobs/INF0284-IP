//
//  Cidade Segura
//  
//
//  Created by Guilherme Ferreira on 19/11/2020.
//
//
#include <stdio.h>
#include <stdlib.h>
#define TAM 100

void teste_camera(int A[TAM][TAM], int tam);

int main(){
	int M[TAM][TAM];
	int n, lin, col;
	scanf("%d", &n);
	
	n = n + 1;
	for(lin=0;lin<n;lin++){
        for(col=0;col<n;col++){
            scanf("%d", &M[lin][col]);
        }
    }
    
	teste_camera(M, n);
	
	return 0;
}

void teste_camera(int A[TAM][TAM], int tam){
	int lin, col; 
	int 
	j = 0,
	i = 0,
	soma = 0,
	k = (tam-1)*(tam-1);
	while(k--){
		for(lin=i;lin<i+2;lin++){
        	for(col=j;col<j+2;col++){
        		soma+= A[lin][col];
    		}
		}
		if(soma>=2){
			printf("S");
		}else{
			printf("U");
		}
	soma=0;
	j++;
	
	if(j==tam -1){
		i++;
		j=0;
		printf("\n");
	}
    }
}
