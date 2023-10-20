//Escreva um programa que leia uma matriz M de 4 x 4 elementos e, 
//utilizando estruturas de repetição,apresente na tela a soma dos elementos marcados com x
#include<stdio.h>
int main(){
	
	int matriz[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}}, i, j, soma;
	
	soma = 0;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j <= i; j++){
			
			soma = soma + matriz [i][j];
			
		}
	}
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf(" %d", matriz[i][j]);
		}
		printf(" \n");
	}
	
	printf(" a soma da diagonal secundaria é: %d", soma);
	
	return 0;
}