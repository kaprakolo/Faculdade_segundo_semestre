//Escreva um algoritmo que mostre na tela a soma obtida dos 100 primeiros números inteiros (1 + 2 + 3+ 4 + 5 + ... + 100). Resultado: 5050
#include<stdio.h>
int main(){
    int i;
    int soma = 0;
    
    for(i = 1; i <= 100; i = i + 1){
        
        soma = soma + i;
    }

    printf("%d", soma);

    return 0;
}