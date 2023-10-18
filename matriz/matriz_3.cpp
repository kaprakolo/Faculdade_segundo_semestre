//Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros.
//Em seguida, leia umnúmero qualquer do teclado e mostre na tela o índice em que o número se encontra na matriz,
//ouentão a mensagem "Número não encontrado!", se o número não estiver presente na matriz

#include<stdio.h>
int main(){
	
	int matriz [2][3], i, j, , num;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("\n insira numero [%d][%d]: ",i ,j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("insira numero que deseja: ");
	scanf("%d", &num);
	
	
	
	printf("\n produto é %d", produto);
	
	return 0; 
}
