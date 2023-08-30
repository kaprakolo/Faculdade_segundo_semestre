#include<stdio.h>
int main(){
    int num_folhas;
    float valor_pagar;

    printf("insira numero de folhas: ");
    scanf("%d", &num_folhas);

    if (num_folhas > 100)
    {
        valor_pagar = 25 + (num_folhas - 100) * .2;
        printf("o valor a pagar é: %.2f.", valor_pagar);
    }
    else{
        valor_pagar = num_folhas * .25;
        printf("o valor a pagar é: %.2f.", valor_pagar);
    }
    
}