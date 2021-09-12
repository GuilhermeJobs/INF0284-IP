#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000
#define N 4

typedef struct DADOS{
	double vetor[MAX];
	double norma;
}DADOS;

struct DADOS calculo[MAX];

void OrdenarVetor(struct DADOS v[], int tam_w);

void troca(struct DADOS *p, struct DADOS *q);

void ImprimirDados(struct DADOS v[], int tam_w);

int main(){
	int n, i, j;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		for(j=0;j<N;j++){
			scanf("%lf", &calculo[i].vetor[j]);
		}
	}
	//calcular norma
	for(i=0;i<n;i++){
		calculo[i].norma = 0;
		for(j=0;j<N;j++){
			calculo[i].norma += pow(calculo[i].vetor[j],2);
		}
		calculo[i].norma = sqrt(calculo[i].norma);
	}
	
	OrdenarVetor(calculo, n);
	ImprimirDados(calculo, n);
	return 0;
}

void OrdenarVetor(struct DADOS v[], int tam){
	int i, j;
	double aux;
	for(i=0;i<tam;i++){
		for(j=1;j<tam;j++){
			if(v[i].norma < v[j].norma){
				troca(&v[i],&v[j]);
			}
		}
	}
}

void ImprimirDados(struct DADOS v[], int tam_w){
	int i, j;
	for(i=0;i<tam_w;i++){
		printf("Vetor: (");
		for(j=0;j<N;j++){
			printf("%.2lf", v[i].vetor[j]);
			if(j<N-1){
				printf(", ");
			}
		}
		printf(") Norma: %.2lf\n", v[i].norma);
	}
}

 void troca(struct DADOS *p, struct DADOS *q){
	 struct aluno aux;
	 aux=*p;
	 *p=*q;
	 *q=aux;
 }
