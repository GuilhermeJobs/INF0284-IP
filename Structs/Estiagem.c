#include <stdio.h>
#include <stdlib.h>

#define MAX 200

struct ala{
	int quant_moradores;
	int consumo;
	double consumom;
};
	
struct ala imoveis[MAX];

void troca(struct ala *p, struct ala *q);

int main(){
	int i, k, j=0;
	int soma, imo, test = 0;
	double somaConsumo, somaMoradores, consumoM;
	do
	{
		scanf("%d", &imo);
		if(imo==0){
			break;
		}else{
		for(i=0;i<imo;i++){
			scanf("%d %d", &imoveis[i].quant_moradores, &imoveis[i].consumo);
		imoveis[i].consumom = imoveis[i].consumo/imoveis[i].quant_moradores;
		somaConsumo += imoveis[i].consumo;
		somaMoradores += imoveis[i].quant_moradores;
		}
		
		consumoM = somaConsumo/somaMoradores;
		
		for(i=0;i<imo;i++){
			for(k=0;k<imo;k++){
				if(imoveis[i].consumom < imoveis[k].consumom){
					troca(&imoveis[i], &imoveis[k]);
				}
			}
		}
		
		j++;
		printf("Cidade# %d:\n", j);
		for(i=0;i<imo;i++){
			for(k=0;k<imo;k++){
				if(imoveis[i].consumo == imoveis[k].consumo){
					test++;
					if(test>1){
						soma = imoveis[i].quant_moradores + imoveis[k].quant_moradores;
					}
				}
			}
			test = 0;
				if(j==1){
					soma = imoveis[i].quant_moradores;
				}
				printf("%d-%.0lf", soma, imoveis[i].consumom);
				if(i<=imo-1){
					printf(" ");
				}
		}
		printf("\n");
		printf("Consumo medio: %.2lf m3.\n", consumoM);
		
		somaConsumo = 0;
		somaMoradores = 0;
		consumoM = 0;
		}
		
	}while(imo!=0);
	
	return 0;
}

void troca(struct ala *p, struct ala *q){
    struct ala aux;
    aux=*p;
    *p=*q;
    *q=aux;
}
