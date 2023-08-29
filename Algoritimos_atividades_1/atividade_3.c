#include<stdio.h>
int main(){
    float num;

    printf("insira o numero: ");
    scanf("%f", &num);
    if (num <= 0 )
    {
    printf("o numero absoluto é: %f", num);
    }
    
    if (num >= 0){
      printf("o numero absoluto é: %f", num * -1);
    }
}