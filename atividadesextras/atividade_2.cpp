#include<stdio.h>
#include<locale.h>
#include<ctype.h> // biblioteca pro toupper
#include<stdlib.h> // biblioteca pro numero aleatorio
#include<time.h> // biblioteca faz com q o rand gere numeros aleatorios toda vaz q executado-

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[21], opcao, continuar;// armazena um nome com 21 caracteres
	int resposta, goblin;
	
	 do {
	
	printf("digite seu nome: ");
	scanf("%s", nome);// não vai e comercial pq é string
	
	printf("Olá %s !", nome);
	 
	printf("\nquer jogar? S/N");
	scanf(" %c", &opcao);
	
	if(toupper(opcao)== 'N'){
		printf("\nOK fica pra próxima!");
		return 0;
	}
	
	srand(time(NULL));
	goblin = 1 + rand() % 5; // numero aleatorio entre 0 ate 4
	
	printf("\nEm qual armário você acha que o goblin está [digite o número]: ");
	printf("\n|_1_| |_2_| |_3_| |_4_| |_5_|");
	scanf("%d", &resposta);
	
	while (resposta != goblin){
		
		printf("\nDesculpe! O goblin ainda está à espreita em outro lugar!");
		printf("\nEm qual armário você acha que o goblin está [digite o número]: ");
		printf("\n|_1_| |_2_| |_3_| |_4_| |_5_|");
		scanf("%d", &resposta);
	}
	printf("Bom trabalho %c!!! Você encontrou o goblin. Ele estava com tanto medo que fugiu!", nome);
	
	printf("\nDeseja repetir o codigo? (s/n): ");
    scanf(" %c", &continuar);  // Espaco antes de %c para ignorar espacos e quebras de linha
	
	} while (continuar == 's' || continuar == 'S');
	
	return 0;
}
