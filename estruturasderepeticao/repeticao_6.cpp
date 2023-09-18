//Escreva um algoritmo que some os numeros fornecidos pelo usuario ate que o numero lido seja iguala zero. Ao final, mostre o resultado da soma.
#include<stdio.h>
int main(){
	
	int numero, soma = 0;
	
	do{
		printf("Digite um numero( zero encerra): ");
		scanf("%d", &numero);
		
		soma = numero + soma;
		
	}
	while (numero != 0);
	
	printf("A soma dos numeros e: %d", soma);
	
	return 0;
}