//Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros.
//Em seguida, leia umn�mero qualquer do teclado e mostre na tela o �ndice em que o n�mero se encontra na matriz,
//ouent�o a mensagem "N�mero n�o encontrado!", se o n�mero n�o estiver presente na matriz

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
	
	
	
	printf("\n produto � %d", produto);
	
	return 0; 
}
