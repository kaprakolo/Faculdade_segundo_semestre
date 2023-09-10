#include<stdio.h>
int main(){
    int anos, meses, dias, idade_total;
    printf("insira quantos anos, meses e dias você tem respectivamente: ");
    printf("anos: ");
    scanf("%d", &anos);

    printf("meses: ");
    scanf("%d", &meses);

    printf("dias: ");
    scanf("%d", &dias);

    idade_total = anos * 365 + meses * 30 + dias;

    printf("sua idade em dias é: %d", idade_total);

    return 0;

}