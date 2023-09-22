#include<stdio.h>
int main(){
	
	float maior, menor, soma, num;
	
	printf(" insira numero: ");
	scanf("%f", &num);
	
	menor = num;
	maior = num;
	
	while (num != 0){
		
		
		if(num < menor){
			menor = num;
		}
		if(num > maior){
			maior = num;
		}
		printf("\n insira numero: ");
		scanf("%f", &num);
		
	}
	
	soma = maior - menor;
	
	printf("a amplitude é: %.2f", soma);

	
	return 0;
}
