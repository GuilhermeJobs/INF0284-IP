#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM 4
#define MAX 1000

struct distancia{
	double vet[TAM];
};

struct distancia ponto[MAX];

int main(){
	int i, N, con = 0, j = 0;
	double ab;
	
	scanf("%d", &N);
	
	while(N--){
		for(i=0;i<TAM;i++){
			scanf("%lf", &ponto[j].vet[i]);
		}con++;
		
		for(i=0;i<TAM;i++){
			ab += pow((ponto[j-1].vet[i] - ponto[j].vet[i]),2);
		}
		ab = sqrt(ab);

		if(con>1){
			printf("%.2lf\n", ab);
		}
		j++;
	ab=0;
	}
	
	return 0;
}
