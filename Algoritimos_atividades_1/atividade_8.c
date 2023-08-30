#include<stdio.h>
int main(){
    int num;

    printf("insira numero: ");
    scanf("%d", &num);

    if (num > 0 )
    {
        if (num % 2 == 0)
        {
            printf("o numero é par.");
        }
        else{
            printf("o numero é impar.");
        }
    }
    else{
        printf("o numero absoluto é: %d.", num * - 1);
    }
}