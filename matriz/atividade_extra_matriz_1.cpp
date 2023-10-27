#include<stdio.h>

int main(){
	
	int matriz[3][3] = {{8,1,6},{3,5,7},{4,9,2}}, i,j, vetor[8] = {0};
	
	for(i = 0; i < 3; i++){
		
		vetor[0] += matriz [0][i];
		vetor[1] += matriz [1][i];
		vetor[2] += matriz [2][i];
		
		vetor[3] += matriz [i][0];
		vetor[4] += matriz [i][1];
		vetor[5] += matriz [i][2];
		
		vetor[6] += matriz [i][i];
		vetor[7] += matriz [i][2 - i];
		
	}
	
	for(i = 0; i < 8; i++){
		if(vetor[0] != vetor[i]){
			printf(" nao é quadrado megico");
			return 0;
		}
		else{
			printf("é um quadrado megico");
			return 0;
		}
	}
	printf("\n");
 	
	return 0;
}
