//Escreva um algoritmo que mostre na tela uma contagem regressiva de 10 até 0 para o lançamento deum foguete. Após o término da contagem regressiva, deve ser apresentada a palavra "Fogo!"
#include<stdio.h>
int main(){

    int i;

    for(i = 10; i >= 0; i--){

        printf("\n%d", i);
    }
    printf("\nFogo!!!");

    return 0;
}