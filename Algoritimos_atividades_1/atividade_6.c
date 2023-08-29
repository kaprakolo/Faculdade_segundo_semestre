#include<stdio.h>
int main(){
    int num;

    printf("insira número: ");
    scanf("%d", &num);

    if (num % 6 == 0){
        printf("o número é divisivel por 2 e 3.");
    }
    else{
        printf("o número não é divisivel por 2 e por 3.");
        }
}