//Escreva um programa que leia dois números inteiros distintos e verifique se o maior número digitadoé divisível pelo menor. Se verdadeiro, apresente a mensagem "Estes números são divisíveis!", casocontrário, apresente a mensagem "Estes números não são divisíveis!"
#include<stdio.h>
int main(){
    int num_1, num_2;

    printf("insira numero um: ");
    scanf("%d", &num_1);

    printf("insira numero dois: ");
    scanf("%d", &num_2);

    if (num_1 % num_2 == 0)
    {
        printf("são divisiveis");
    }
    else if (num_2 % num_1 == 0)
    {
        printf("sao divisiveis");
    }
    else{
        printf("não sao divisiveis");
    }
    return 0;
}