//
// Criador por Guilherme Ferreira em 19/11/2020
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_NOME 500
#define TAM_CURSO 100
#define QTTD_CURSOS 30
#define QTTD_ALUNOS 100


struct dados_cursos{
	int cod_curso;
	double valor_curso;
	char nome_curso[TAM_CURSO];
};
struct dados_cursos curso[QTTD_CURSOS];

struct dados_alunos{
	char nome_aluno[TAM_NOME];
	int cod_curso;
	int n_creditos;
};
struct dados_alunos aluno[QTTD_ALUNOS];

void join(struct dados_alunos v[], int tam_v, struct dados_cursos u[], int tam_u);

int main(){
	int n_cursos, n_alunos;
	int i; char teste_nome[TAM_NOME];
	
	scanf("%d", &n_cursos);
	for(i=0;i<n_cursos;i++){
		scanf("%d", &curso[i].cod_curso);
		scanf("%lf", &curso[i].valor_curso);
		scanf("\n%[^\n]", curso[i].nome_curso);
		getchar();
		int j, n;
		n = strlen(curso[i].nome_curso);
		for(j=0;j<n;j++){
		curso[i].nome_curso[j] = curso[i].nome_curso[j];
		}
	}
	//printf("\nproximo\n");
	scanf("%d", &n_alunos);
	for(i=0;i<n_alunos;i++){
		scanf("\n%[^\n]", aluno[i].nome_aluno);
		int j, n;
		n = strlen(aluno[i].nome_aluno);
		for(j=0;j<n;j++){
		aluno[i].nome_aluno[j] = aluno[i].nome_aluno[j];
		}
		scanf("%d", &aluno[i].cod_curso);
		scanf("%d", &aluno[i].n_creditos);
	}
	
	//funcao teste
	join(aluno, n_alunos, curso, n_cursos);
	return 0;
}


void join(struct dados_alunos v[], int tam_v, struct dados_cursos u[], int tam_u){
	//aluno          aluno v[]
	//curso			 curso u[]
	//n_alunos		 tam_v
	//n_cursos		 tam_u
	int i, j;
	
	for(i=0;i<tam_v;i++){
		for(j=0;j<tam_u;j++){
			if(u[j].cod_curso == v[i].cod_curso){
				printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n"
				,v[i].nome_aluno, u[j].nome_curso, v[i].n_creditos, u[j].valor_curso, ((v[i].n_creditos*1.00) * u[j].valor_curso));
			}
		}
	}
}
