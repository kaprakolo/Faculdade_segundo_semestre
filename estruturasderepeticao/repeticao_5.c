//Escreva um algoritmo que mostre todos os números pares existentes entre 1 e um número lido doteclado, bem como a quantidade de números apresentados.
#include<stdio.h>
int main (){

    int num_repetidos, i, num_max;

    printf("insira numero: ");
    scanf("%d", &num_max);

    for(i = 2; i <= num_max; i = i + 2){
	
        printf(" %d", i);
	num_repetidos++;
    }
    printf("\n a quantidade de numeros apresentados é de: %d", num_repetidos);


    return 0;
}
