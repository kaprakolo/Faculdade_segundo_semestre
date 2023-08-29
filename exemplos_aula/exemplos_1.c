#include<stdio.h>
int main(){

    float num_1, num_2, soma;

    printf("informe primeiro número: ");
    scanf("%f", &num_1);

    printf("informe segundo número: ");
    scanf(" %f", &num_2);

    soma = num_1 + num_2;

    if(soma < 20){
        printf(" resultado: %.2f", soma + 8);
    }
    else{
        printf(" resultado: %.2f", soma - 5);
        
    }
}