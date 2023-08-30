#include<stdio.h>
int main(){
    int idade;

    printf("insira sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        if (idade > 65)
        {
            printf("terceira idade.");
        }
        else{
            printf("maior de idade.");
        }
    }
    else{
        printf("menor de idade.");
    }
}