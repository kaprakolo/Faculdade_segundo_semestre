//Escreva um algoritmo que apresente na tela a tabuada de um numero lido do teclado. Por exemplo,considerando que o numero lido e 2, o formato da apresentacao deve ser o seguinte
#include<stdio.h>
int main(){
	int numero = 0 , i, resultado;
	
	printf("Insira numero para ver sua tabuada: ");
	scanf("%d", &numero);
	
	for(i = 1; i <= 10; i++){
		
		resultado = numero * i;
		
		printf("\n%d x %d = %d", numero, i, resultado);
		
	}
	return 0;
}