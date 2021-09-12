#include <stdio.h>
#include <stdlib.h>
#define MAX_L 10
#define MAX 320

void teste_log(int mLog[MAX_L][MAX_L], int tamG, int mTv[MAX][MAX], int tamT);

int main(){
	int MatrizLog[MAX_L][MAX_L];
	int TV[MAX][MAX];
	int lin, col, nG, nT;
	
	scanf("%d", &nG);
	for(lin=0;lin<nG;lin++){
		for(col=0;col<nG;col++){
			scanf("%d", &MatrizLog[lin][col]);
		}
	}
	
	scanf("%d", &nT);
	for(lin=0;lin<nT;lin++){
		for(col=0;col<nT;col++){
			scanf("%d", &TV[lin][col]);
		}
	}
	
	void teste_log(MatrizLog, nG, TV, nT);
	
	return 0;
}

/*void teste_log(int mLog[MAX_L][MAX_L], int tamG, int mTv[MAX][MAX], int tamT){
	int lin, col, cont = 0;
	int pri = mLog[0][0];
	int apoio = tamG*tamG;
	for(lin=0;lin<tamT;lin++){
		for(col=0;col<tamT;col++){
			if(pri == mTv[lin][col]){
				int p = lin, q = col;
				while(apoio--)
					if(mLog[][] == mTv[][]){
						cont++;
						k++; q++;
					}
				}
			}
		}
	}
}*/
