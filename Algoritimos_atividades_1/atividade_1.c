#include<stdio.h>
int main(){
    float num_1, num_2, soma;

    printf("insira primeiro numero: ");
    scanf("%f",&num_1);

    printf("insira segundo numero: ");
    scanf("%f", &num_2);

    soma = num_1 + num_2;

    if(soma < 20){
        printf("o resultado sa soma é: %.2f", soma + 8);
    }
    else{
        printf("o resultado da soma é: %.2f", soma - 5);
    }
}