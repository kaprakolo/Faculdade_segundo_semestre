//Escreva um algoritmo que receba um número inteiro positivo e escreva a sequência de números deFibonacci.
// Por exemplo, se o número for 10, escreva 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
#include<stdio.h>
int main(){
	
	int i;
	float numerador, denominador, resultado;
	
	numerador = 1;
	denominador = 100;
	
	for (i = 1; 1 <= 100; i++){
		resultado = resultado + numerador / denominador;
		numerador++;
		denominador--;
	}
	return 0;
}
