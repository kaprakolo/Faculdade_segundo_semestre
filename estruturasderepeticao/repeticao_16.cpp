#include<stdio.h>
int main(){
	
	int i, quantidadenum, antigo, soma, ate;
	soma = 0;
	
	for(i = 1; soma <= 100; i++){
		
		soma = soma + i;
	
		printf("\n %d", soma);
		quantidadenum++;
	}
	
	printf("\n %d", quantidadenum-1);

	
	return 0;
}
