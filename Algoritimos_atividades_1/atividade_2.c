#include<stdio.h>
int main(){
    int num_1, num_2;

    printf("insira primeiro numero: ");
    scanf("%d", &num_1);

    printf("insira segundo numero: ");
    scanf("%d", &num_2);

    if(num_1 > num_2){
        printf("os numeros em ordem crescente são: %d e %d", num_2, num_1);
    }
    else{
        printf("os numeros em ordem crescente são: %d e %d", num_1, num_2);
    }

}