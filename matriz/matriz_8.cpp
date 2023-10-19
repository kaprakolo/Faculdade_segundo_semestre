//Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,
//apresente na tela a soma dos elementos da diagonal secundária da matriz.
#include<stdio.h>
int main(){
	
	int matriz[5][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}}, i, j, soma;
	
	soma = 0;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(i + j == 4){
			soma = soma + matriz [i][j];
			}
		}
	}
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf(" %d", matriz[i][j]);
		}
		printf(" \n");
	}
	
	printf(" a soma da diagonal secundaria é: %d", soma);
	
	return 0;
}
