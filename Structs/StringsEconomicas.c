#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 30
#define TAM_MAX 500000

char buffer[TAM_MAX];
char * nome_completo[TAM];

int main(){
	int n, i;

	scanf("%d", &n);
	getchar();
	//ler em buffer e amazenar o espaço necessario
	for(i=0;i<n;i++){
		
		scanf("%[^\n]", buffer);
		getchar();
		nome_completo[i] = (char*) malloc(strlen(buffer)+1);
		
		if(nome_completo[i]){
			strcpy(nome_completo[i], buffer);
		}else{
			exit(1);
		}
	}
	
	//imprimir os nomes
	for(i=0;i<n;i++){
		printf("%s\n", nome_completo[i]);
	}
	
	//liberar espaço
	for(i=0;i<n;i++){
		free(nome_completo[i]);
	}
	
	return 0;
}
