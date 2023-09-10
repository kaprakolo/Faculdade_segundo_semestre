#include<stdio.h> //O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem dodistribuidor e dos impostos aplicados ao custo de fábrica. Supondo que o percentual do distribuidorseja de 28% e os impostos de 45%, escrever um programa para ler o custo de fábrica de um carro,calcular e escrever o custo final ao consumidor
int main(){
    float valor_custo, valor_final;
    printf("insira o valor de custo do carro:");
    scanf("%f", valor_custo);

    valor_final = valor_custo * .28 + valor_custo * .45;

    printf("o valor final para o consumidor é: %.2f", valor_final);

    return 0;
}