#include<stdio.h>
int main(){

    float altura, peso_ideal;
    char genero;

    printf("informe sua altura: ");
    scanf("%f", &altura);

    printf("informe genero(M/F): ");
    scanf(" %c", &genero);

    if(toupper(genero) == 'M'){
        peso_ideal == 72.7 * altura - 58;

    }
    else{
        peso_ideal == 62.1 * altura - 44.7;
    }
    printf("seu peso ideal é: %.1f", peso_ideal);

}