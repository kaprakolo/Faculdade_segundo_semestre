#include<stdio.h>

int main(){
	
	int vetor[10] = {21, 13, -2, -1, 12, -4, -5, 42, 17, 32}, negativo, i, j=0, rotev[10];
	
	for(i = 0; i < 10; i++){
		printf(" %d", vetor[i]);
	
		if(vetor[i] < 0){
		rotev[j] = vetor[i];
		j++;
		}
	}
	printf("\n");
	for(j = 0;j < 10; j++){
		if(rotev[j] < 0){
		
	printf(" %d", rotev[j]);
	}
	}
	return 0;
}
