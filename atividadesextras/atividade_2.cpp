#include<stdio.h>
#include<locale.h>
#include<ctype.h> // biblioteca pro toupper
#include<stdlib.h> // biblioteca pro numero aleatorio
#include<time.h> // biblioteca faz com q o rand gere numeros aleatorios toda vaz q executado-

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[21], opcao;// armazena um nome com 21 caracteres
	int resposta, goblin;
	
	
	printf("digite seu nome: ");
	scanf("%s", nome);// n�o vai e comercial pq � string
	
	printf("Ol� %s !", nome);
	 
	printf("\nquer jogar? S/N");
	scanf(" %c", &opcao);
	
	if(toupper(opcao)== 'N'){
		printf("\nOK fica pra pr�xima!");
		return 0;
	}
	
	srand(time(NULL));
	goblin = 1 + rand() % 5; // numero aleatorio entre 0 ate 4
	
	printf("|_1_| |_2_| |_3_| |_4_| |_5_|");
	printf("\nEm qual arm�rio voc� acha que o goblin est� [digite o n�mero]: ");
	scanf("%d", &resposta);
	
	while (resposta != goblin){
		
		printf("Desculpe! O goblin ainda est� � espreita em outro lugar!");
		printf("|_1_| |_2_| |_3_| |_4_| |_5_|");
		printf("\nEm qual arm�rio voc� acha que o goblin est� [digite o n�mero]: ");
		scanf("%d", &resposta);
	}
	printf("Bom trabalho %c!!! Voc� encontrou o goblin. Ele estava com tanto medo que fugiu!", nome);
	
	return 0;
}
