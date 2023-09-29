#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num_vet [5], i, num;
	
	for(i = 0; i < 5; i++){
		
		printf("insira numero [%d]: ", i);
		scanf("%d", &num_vet[i]);
	}
	for(i = 0; i < 5; i++){
	printf(" %d", num_vet[i]);
	}
	return 0;
}
