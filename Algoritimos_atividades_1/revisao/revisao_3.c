#include<stdio.h>
//Elabore um programa que leia dois valores inteiros distintos e apresente o resultado da diferença domaior valor pelo menor valor
    int main(){
        int num_1, num_2, resultado;

        printf("insira primeiro numero: ");
        scanf("%d", &num_1);

        printf("insira segundo numero: ");
        scanf("%d", &num_2);

        if (num_1 > num_2)
        {
            resultado = num_1 - num_2;
            printf("o resultado da diferença é: %d", resultado);
        }
        else{
            resultado = num_2 - num_1;
            printf("o resultado da diferença é: %d", resultado);
        }
        return 0;

    }