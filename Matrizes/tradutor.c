#include <stdio.h>
#define TAM 30

struct aluno{
	int matricula;
	int dia;
	int mes;
	int ano;
	char nome[201];
};

struct aluno turmas[TAM];

 void troca(struct aluno *p, struct aluno *q){
	 struct aluno aux;
	 aux=*p;
	 *p=*q;
	 *q=aux;
 }

 void selectionSortDia(struct aluno v[], int tam){
	int i,j,indMaior;
	int datamaior;
	short int precTroca=0;
	for(i=0;i<tam-1;i++){
		indMaior=i;
		datamaior=v[i].dia;
		for(j=i+1;j<tam;j++){
			if(datamaior>v[j].dia){
				datamaior=v[j].dia;
				indMaior=j;
				precTroca=1;
			}
		}
		if(precTroca){
			troca(&v[i],&v[indMaior]);
			precTroca=0;
		}
	}
 }

 void selectionSortMes(struct aluno v[], int tam){
	int i,j,indMaior;
	int datamaior;
	short int precTroca=0;
	for(i=0;i<tam-1;i++){
		indMaior=i;
		datamaior=v[i].mes;
		for(j=i+1;j<tam;j++){
			if(datamaior>v[j].mes && v[j].dia == v[+1].dia){
				datamaior=v[j].mes;
				indMaior=j;
				precTroca=1;
			}
		}
		if(precTroca){
			troca(&v[i],&v[indMaior]);
			precTroca=0;
		}
	}
 }

 void selectionSortAno(struct aluno v[], int tam){
	int i,j,indMaior;
	int datamaior;
	short int precTroca=0;
	for(i=0;i<tam-1;i++){
		indMaior=i;
		datamaior=v[i].ano;
		for(j=i+1;j<tam;j++){
			if(datamaior<v[j].ano && v[j].mes == v[j].mes){
				datamaior=v[j].ano;
				indMaior=j;
				precTroca=1;
			}
		}
		if(precTroca){
			troca(&v[i],&v[indMaior]);
			precTroca=0;
		}
	}
 }

int main(){
	int n, m, i;
	
	scanf("%d", &m);

	for(i=0;i<m;i++){
		scanf("%d", &turmas[i].matricula);
		scanf("%d", &turmas[i].dia);
		scanf("%d", &turmas[i].mes);
		scanf("%d", &turmas[i].ano);
		scanf("%[^\n]", turmas[i].nome);
		getchar();
	}
	
	selectionSortDia(turmas, m);
	//selectionSortMes(turmas, m);
	selectionSortAno(turmas, m);
	
	for(i=0;i<m;i++){
		printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", turmas[i].matricula, turmas[i].nome, turmas[i].dia, turmas[i].mes, turmas[i].ano);
	}
	
	return 0;
}
