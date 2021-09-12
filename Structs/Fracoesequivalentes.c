//
// Questão 1 - Venda de Suco Natural 
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
#define COD 12

struct dados{
	int hora;
	int dia;
	int mes;
	int ano;
	char tipo;
	char cod_lote[COD];
};

struct dados produto[MAX];

void troca(struct dados *p, struct dados *q);

//função pra ordenar a hora
void orde(struct dados v[], int tam);

int main(){
	int i, n;
	scanf("%d", &n);
	
	// leitura
	for(i=0;i<n;i++){
		scanf("%d", &produto[i].hora);
		scanf(" %d", &produto[i].dia);
		scanf(" %d", &produto[i].mes);
		scanf(" %d", &produto[i].ano);
		scanf(" %c", &produto[i].tipo);
		scanf(" %[^\n]", produto[i].cod_lote);
		getchar();
	}
	
	orde(produto, n);
	// Imprimir
	for(i=0;i<n;i++){
		printf("%s ", produto[i].cod_lote);
		printf("%d ", produto[i].hora);
		printf("%d ", produto[i].dia);
		printf("%d ", produto[i].mes);
		printf("%d ", produto[i].ano);
		printf("%c\n", produto[i].tipo);
	}
	return 0;
}

void orde(struct dados v[], int tam){
	int i, j;
	for(j=0;j<tam;j++){
        for(i=0;i<tam;i++){
	        if(v[j].ano < v[i].ano){
	            troca(&produto[j], &produto[i]);
	        }
        }
    }
    
    for(j=0;j<tam;j++){
        for(i=0;i<tam;i++){
        	if(v[j].ano == v[i].ano){
		        if(v[j].mes < v[i].mes){
		            troca(&produto[j], &produto[i]);
		        }
		    }
        }
    }

    for(j=0;j<tam;j++){
        for(i=0;i<tam;i++){
        	if(v[j].ano == v[i].ano && v[j].mes == v[i].mes){
		        if(v[j].dia < v[i].dia){
		            troca(&produto[j], &produto[i]);
		        }
		    }
        }
    }
    
    for(j=0;j<tam;j++){
        for(i=0;i<tam;i++){
        	if(v[j].ano == v[i].ano && v[j].dia == v[i].dia && v[j].mes == v[i].mes){
		        if(v[j].hora < v[i].hora){
		            troca(&produto[j], &produto[i]);
		        }
		    }
        }
    }
    
    for(j=0;j<tam;j++){
        for(i=0;i<tam;i++){
	        if(v[j].hora == v[i].hora && v[j].dia == v[i].dia && v[j].mes == v[i].mes && v[j].ano== v[i].ano){
	            if(v[j].tipo < v[i].tipo){
					troca(&produto[j], &produto[i]);
				}
	        }
        }
    }
}

void troca(struct dados *p, struct dados *q){
     struct dados aux;
     aux = *p;
     *p = *q;
     *q = aux;
 }
