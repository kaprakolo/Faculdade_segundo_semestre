#include<stdio.h>
int main(){
    float num_1, num_2, resultado;
    char operacao;
    
    printf("insira primeiro numero: ");
    scanf("%f", &num_1);

    printf("insira segundo numero: ");
    scanf("%f", &num_2);

    printf("digite a operação desejada: \n + para adição.\n - subtração. \n / para divisão.\n * para multiplicação.\n");
    scanf(" %c", &operacao);

    switch (operacao)
    {
    case '+':
        resultado = num_1 + num_2;
        printf("o resultado é: %.2f", resultado);
        break;
    case '-':
        resultado = num_1 - num_2;
        printf("o resultado é: %.2f", resultado);
        break;
    case '/':
        if (num_2 != 0)
        {
            resultado = num_1 / num_2;
            printf("o resultado é: %.2f", resultado);
        }
        else{
            printf("erro na divisão.");
        }
        break;
    case '*':
        resultado = num_1 * num_2;
        printf("o resultado é: %.2f", resultado);
        break;

    default:
        printf("operação invalida.\n");
        break;
    }
}