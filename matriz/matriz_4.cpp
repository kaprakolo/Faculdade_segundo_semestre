//Escreva um programa que leia uma matriz M de 5 x 5 elementos e,
// utilizando estruturas de repetição,apresente na tela o menor valor da matriz, o maior valor da matriz, 
//a soma dos valores da matriz e amédia dos valores da matriz.

#include<stdio.h>
int main(){
	
	int matriz [5][5], i, j, menor, maior, soma;
	float media;
	
	menor = 10000;
	maior = 0;
	soma = 0;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("\n insira numero [%d][%d]: ",i ,j);
			scanf("%d", &matriz[i][j]);
			soma = soma + matriz [i][j];
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
			}
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
			}
		}
	}
	
	media = soma / 6.0;
	
	printf(" menor = %d\n maior = %d\n media = %.1f\n soma = %d ",menor, maior, media, soma);
	
	return 0; 
}
