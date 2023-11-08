#include<stdio.h>
#include<locale.h>

struct Conta{
	char nome[21];
	int conta_numero;
	float saldo;
};

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	struct Conta conta[3] = {{"Ana", 1,0},{"Rodolfo", 2,0},{"Bruno", 3,0}};
	
	int i, op;
	float deposito;
	
	switch (op){
		case 1: printf("\nNome	     		      Conta	Saldo");
				printf("\n------------------------------------------------");
	
				for(i = 0; i < 3; i++){
					printf("\n%-20s	%10d %10.2f", conta[i].nome, conta[i].conta_numero, conta[i].saldo);
				}
		case 2: 
				deposito = 0;
				printf("Insira o valor do deposito: ");
				scanf("%f", &deposito);
				printf("Insira o numero da conta: ");
				scanf("%d", &conta);
				
	}
	
	printf("Nome	     		      Conta	Saldo");
	printf("\n------------------------------------------------");
	
	for(i = 0; i < 3; i++){
		printf("\n%-20s	%10d %10.2f", conta[i].nome, conta[i].conta_numero, conta[i].saldo);
	}
	
	return 0;
}
	
