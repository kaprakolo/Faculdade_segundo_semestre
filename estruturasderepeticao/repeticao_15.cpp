//Escreva um algoritmo que receba um número inteiro positivo e escreva a sequência de números deFibonacci.
// Por exemplo, se o número for 10, escreva 1, 1, 2, 3, 5, 8, 13, 21, 34, 5
#include<stdio.h>
int main(){

	int i, atual, anterior, numtermo, temp;
	
	printf("1 1");
	
	atual = 1;
	anterior = 1;
	numtermo = 10;
	
	for(i = 3; i <= numtermo; i++){
		
		temp = atual;
		atual = atual + anterior;
		anterior = temp;
		
		printf(" %d", atual);
		
		
	}
	
	return 0;
}
