#include<stdio.h>
int main(){
	int senha, tentativas;
	
	printf("insira senha: ");
	scanf("%d", &senha);
	
	while (senha != 2009){
		
		printf("\nsenha invalida.");
		printf("\ninsira senha: ");
		scanf("%d", &senha);
		tentativas++;
		
	}
	
	
	printf("\n acesso permitido.");
	printf("\n %d tentativas ", tentativas);

	
	return 0;
}
