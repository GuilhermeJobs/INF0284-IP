#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int main(){
	double M[TAM][TAM];
	int lin, col;
	double a, b, c, d;
	
	for(lin=0;lin<TAM;lin++){
		for(col=0;col<TAM;col++){
			scanf("%lf", &M[lin][col]);
		}
	}
	
	a = M[0][0] * M[0][0] + M[0][1] * M[1][0];
	b = M[0][0] * M[0][1] + M[0][1] * M[1][1];
	c = M[1][0] * M[0][0] + M[1][1] * M[1][0];
	d = M[1][0] * M[0][1] + M[1][1] * M[1][1];
	
	printf("%.3lf %.3lf\n%.3lf %.3lf\n", a, b, c, d);
	
	return 0;
}
