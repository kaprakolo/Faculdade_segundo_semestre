#include<stdio.h>
int main(){
	
	int matriz[4][5] = {{5,4,2,8,7},{3,6,9,1,4},{0,3,5,2,9},{4,9,7,6,2}}, i, j, vetor[4], menor;
	
	
	for(i = 0; i < 4; i++){
		
		menor=1000;
		for(j = 0; j < 5; j++){
			
			if(matriz[i][j] < menor){
			
				menor = matriz[i][j];
			}
		}
		
		printf("\n menor = %d", menor);
		
		vetor[i] = menor;
		
	}
	printf("\n");
	
	printf("o menor valor de cada linha: ");
			
	for(i = 0;i < 4; i++){
	
		printf(" %d", vetor[i]);
			
	}
	printf("\n");
	
	printf("da matriz: \n");
	
	for(i = 0; i < 4; i++){
		
		for(j = 0; j < 5; j++){
			
			printf(" %d", matriz[i][j]);
		}
		printf(" \n");
	}
	
 	
	return 0;
}
