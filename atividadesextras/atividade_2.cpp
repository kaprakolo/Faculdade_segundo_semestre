#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int opcao, esfera, limpeza, troca, quebrado;
	float total;
	char continuar;
	esfera = 0;
	limpeza = 0;
	troca = 0;
	quebrado = 0;
	total = 0;
	
	do{
	
	
	printf("[1] Necessita da esfera.\n[2] Necessita de limpeza.\n[3] Necessita troca de cabo ou conector.\n[4] Quebrado ou inutilizado.");

	printf("\nselecione o defeito: ");
	scanf("%d", &opcao);
	switch (opcao){
		
		case 1 : esfera++;
		break;
		case 2 : limpeza++;
		break;
		case 3 : troca++; 
		break;
		case 4 : quebrado++; 
		break;
	}
	
	
	
	printf("\ndeseja continuar? S/N");
	scanf(" %c", &continuar);
	
	} while (continuar == 's' || continuar == 'S');
	
	total = esfera + limpeza + troca + quebrado;
	
	printf("\nquantidade de mouses: %d", total );
	printf("\nNecessita da esfera: %d ( %.2f %%)", esfera, esfera * 100 / total);
	printf("\nNecessita de limpeza: %d ( %.2f %%)", limpeza, limpeza * 100 / total);
	printf("\nNecessita troca de cabo ou conector: %d (%.2f %%)", troca, troca * 100 / total);
	printf("\nQuebrado ou inutilizado: %d ( %.2f %%)", quebrado, quebrado * 100 / total );
	
	return 0;
}
