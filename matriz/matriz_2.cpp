//Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros e,
// utilizando estruturasde repetição, apresente na tela a soma de todos os elementos da matriz.
#include<stdio.h>
int main(){
	
	int matriz [2][3], i, j, produto, num;
	produto = 1;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("\n insira numero [%d][%d]: ",i ,j);
			scanf("%d", &matriz[i][j]);
			produto = produto * matriz[i][j];
		
		}
		printf("\n produto %d", produto);
	}
	printf("\n produto é %d", produto);
	return 0; 
}
