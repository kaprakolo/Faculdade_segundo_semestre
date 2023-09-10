#include<stdio.h>
int main(){
    float quilos_maca, quilos_morango, valor_sem_desconto_maca, valor_sem_desconto_morango, valor_final, quilos_totais;

    printf("insira quilos de maçã: ");
    scanf("%f", &quilos_maca);

    printf("insira quilos de morango: ");
    scanf("%f", &quilos_morango);

    quilos_totais = quilos_maca + quilos_morango;

    if (quilos_maca <= 5 || quilos_morango <= 5)
    {
        valor_sem_desconto_maca = quilos_maca * 3.8;
        valor_sem_desconto_morango = quilos_morango * 6.5;

        if(valor_sem_desconto_maca > 50 || valor_sem_desconto_morango > 50 || quilos_totais >= 10){
            valor_final = (valor_sem_desconto_maca + valor_sem_desconto_morango) * .9;
            printf("o valor total é: %.2f", valor_final);
        }
        else{
            valor_final = valor_sem_desconto_maca + valor_sem_desconto_morango;
            printf("o valor total é: %.2f", valor_final);
        }
    
    }
    else{valor_sem_desconto_maca = quilos_maca * 3.5;
        valor_sem_desconto_morango = quilos_morango * 6.2;

        if(valor_sem_desconto_maca > 50 || valor_sem_desconto_morango > 50){
            valor_final = (valor_sem_desconto_maca + valor_sem_desconto_morango) * .9;
            printf("o valor total é: %.2f", valor_final);
        }
        else{
            valor_final = valor_sem_desconto_maca + valor_sem_desconto_morango;
            printf("o valor total é: %.2f", valor_final);
        }

    }    
    }
    
