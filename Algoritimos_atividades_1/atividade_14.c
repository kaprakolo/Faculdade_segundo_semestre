#include<stdio.h>
int main(){
    float litros_abastecidos, combustivel, valor_litro, valor_pagar;
    
    printf("insira tipo de combustivel: (1= alcool, 2= gasolina)");
    scanf("%f", &combustivel);

    printf("informe valor do litro do combustive: ");
    scanf("%f", &valor_litro);

    printf("insira quantidade de litros abastecida: ");
    scanf(" %f", &litros_abastecidos);

    if(litros_abastecidos <= 20){
        if (combustivel == 1)
        {
            valor_pagar = litros_abastecidos * valor_litro * 0.97;
            printf("o valor a pagar é: %.2f", valor_pagar);
        }
        else{
            valor_pagar = litros_abastecidos * valor_litro * 0.965;
            printf("o valor a pagar é: %.2f", valor_pagar);
        }
    }
    if (litros_abastecidos > 20)
    {
        if (combustivel == 1)
        {
            valor_pagar = litros_abastecidos * valor_litro * 0.95;
            printf("o valor a pagar é: %.2f", valor_pagar);
        }
        else{
            valor_pagar = litros_abastecidos * valor_litro * 0.94;
            printf("o valor a pagar é: %.2f", valor_pagar);
        }
    }
    
}