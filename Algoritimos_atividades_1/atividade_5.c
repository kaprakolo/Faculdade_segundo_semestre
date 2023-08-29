#include<stdio.h>
int main(){
    float num;

    printf("insira o numero: ");
    scanf(" %f", &num);
    if (20 <= num && num <= 90)
    { 
    printf("o numero está entre 20 e 90.");     
    }
    else{
        printf("O numero não está entre 20 e 90.");
    }
    

}