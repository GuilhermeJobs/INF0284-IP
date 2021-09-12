#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTTD_CURSOS 30
#define MAX 10000
#define QTTD_ALUNOS 100
 
 
struct dados_cursos{
    int cod_curso;
    double valor_curso;
    char * nome_curso[QTTD_CURSOS];
};
struct dados_cursos curso[QTTD_CURSOS];
 
struct dados_alunos{
    char * nome_aluno[QTTD_ALUNOS];
    int cod_curso;
    int n_creditos;
};
struct dados_alunos aluno[QTTD_ALUNOS];
 
void join(struct dados_alunos v[], int tam_v, struct dados_cursos u[], int tam_u);
 
int main(){
    char buffer[MAX];
    int n_cursos, n_alunos;
    int i;
    
    scanf("%d", &n_cursos);
    for(i=0;i<n_cursos;i++){
        scanf("%d", &curso[i].cod_curso);
        scanf("%lf", &curso[i].valor_curso);
 
        scanf("\n%[^\n]", buffer);
        getchar();
        curso[i].nome_curso[i] = (char*) malloc(strlen(buffer)+1);
        if(curso[i].nome_curso[i]){
          strcpy(curso[i].nome_curso[i],buffer);
        }else{
            exit(1);
        }
        
    }
    scanf("%d", &n_alunos);
    for(i=0;i<n_alunos;i++){
 
        scanf("\n%[^\n]", buffer);
        getchar();
        aluno[i].nome_aluno[i] = (char*) malloc(strlen(buffer)+1);
        if(aluno[i].nome_aluno[i]){
          strcpy(aluno[i].nome_aluno[i],buffer);
        }else{
            exit(1);
        }
        scanf("%d", &aluno[i].cod_curso);
        scanf("%d", &aluno[i].n_creditos);
    }
    
    join(aluno, n_alunos, curso, n_cursos);
    return 0;
}
 
 
void join(struct dados_alunos v[], int tam_v, struct dados_cursos u[], int tam_u){
    int i, j;
    
    for(i=0;i<tam_v;i++){
        for(j=0;j<tam_u;j++){
            if(u[j].cod_curso == v[i].cod_curso){
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n"
                ,v[i].nome_aluno[i], u[j].nome_curso[j], v[i].n_creditos, u[j].valor_curso, ((v[i].n_creditos*1.00) * u[j].valor_curso));
                free(v[i].nome_aluno[i]);
            }
        }
    }
    
     for(j=0;j<tam_u;j++){
        free(u[j].nome_curso[j]);
     }
     
}
