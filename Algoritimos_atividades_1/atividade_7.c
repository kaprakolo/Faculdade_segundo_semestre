#include<stdio.h>
int main(){
    int num;
    printf("insira numero: ");
    scanf("%d", &num);

    if (num % 7 == 0 || num % 2 == 0)
    {
        printf("o numero é divisivel por 2 ou 7.");
    }
    else{
    if (num % 14 == 0)
    {
        if (num % 14 == 0){
            printf("o numero é divisivel por 2 e 7.");
        }
        if (num % 7 == 0)
        {
            printf("o numero é divisivel por 7.");
        }
        else{
            printf("o número é divisivel por 2.");
            }
    }
    else{
        printf("o numero não é divisivel por 2 e 7.");

    }
    }
}