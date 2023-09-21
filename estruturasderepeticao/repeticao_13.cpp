//Escreva um algoritmo que mostre o resultado dos primeiros 20 termos da série: 1/1 + 3/2 + 5/4 + 7/8 +... Resultado: 6.00
#include<stdio.h>
int main(){
	int termos, dividendo, divisor, resultado, i;
	
	printf("insira numero de repetiçoes");
	scanf("%d", &termos);
	dividendo = 1;
	divisor = 1;
	
	for(i = 1; i <= termos; i++){
		
		resultado = dividendo / divisor;
		divisor = divisor + 2;
		dividendo = dividendo * 2;
		
		printf(" %d", resultado);
		
	}
	
	return 0;
}
