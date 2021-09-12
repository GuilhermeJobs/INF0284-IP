#include <stdio.h>
#include <stdlib.h>
#define MAX 9

int ContL(int A[MAX][MAX], int a, int b, int num);

int ContC(int A[MAX][MAX], int a, int b, int num);

int main(){
	int Sudoku[MAX][MAX];
	int lin, col;
	int C, validador = 0, validador1 = 0;
	//ler
    for(lin=0;lin<MAX;lin++){
        for(col=0;col<MAX;col++){
            scanf("%d", &Sudoku[lin][col]);
        }
    }
    int nL = MAX;
    int nC = MAX;
    int s = 1;
    //validar linhas
    while(nL--)
	{
    	while(s < 10){
		C = ContL(Sudoku, nL, nC, s);
	    	if(C != 1){
		        validador = -1;
		    }s++;
		}s = 1;
	}
	//validar colucas
	nL = MAX;
    while(nC--)
	{
    	while(s < 10){
		C = ContC(Sudoku, nL, nC, s);
	    	if(C != 1){
		        validador = -1;
		    }s++;
		}s = 1;
	}

	if(validador == -1){
		printf("invalido\n");
	}if(validador == 0){
		printf("valido\n");
	}
	
	return 0;
}

int ContL(int A[MAX][MAX], int a, int b, int num){
    int col,
    cont = 0;
        for(col=0;col<b;col++){
            if(num == A[a][col]){
        cont++;
        }
    }
    return(cont);
}

int ContC(int A[MAX][MAX], int a, int b, int num){
    int lin,
    cont = 0;
        for(lin=0;lin<a;lin++){
            if(num == A[lin][b]){
        cont++;
        }
    }
    return(cont);
}
