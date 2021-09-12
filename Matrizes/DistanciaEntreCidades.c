#include <stdio.h>
#include <stdlib.h>
#define TAM 6
#define MAX 100

void Distancia(int* w, int tw);

int main(){
	int n_cidades;
	int V_cidades[MAX];
	scanf("%d", &n_cidades);
	int i;
	
	for(i=0;i<n_cidades;i++){
		scanf("%d", &V_cidades[i]);
	}
	
	Distancia(V_cidades,n_cidades);
	
	return 0;
}

void Distancia(int* w, int tw){
	int M[TAM][TAM]={0, 63, 210, 190, -5000, 190, 63, 0, 160, 150, 95, 10, 210, 160, 0,
	10, 1, 10, 190, 150, 10, 0, 10, 20, 10, 95, 7, 21, 0, 80, 190, 2, -5000, 41, 80, 0};
	int i;
	int soma = 0;
	
	for(i=0;i<tw-1;i++){
        soma += M[w[i]][w[i+1]];
    }
    
    if(soma > 0){
    printf("%d\n", soma);
	}else{
		printf("rota invalida!\n");
	}
}
