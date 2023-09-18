//Escreva um algoritmo que calcule e mostre na tela uma tabela de valores de temperatura em Celsius e Farenheit. A faixa de temperaturas que deve ser mostrada e de 0 a 100 graus Celsius, em intervalos de 5 graus
#include<stdio.h>
int main(){
	
	float celsius, farenheit;
	int i, escolha;
	
	printf("qual escala voce que inserir (1 para celsius/ 2 para Farenheit): ");
	scanf("%d", &escolha);
	
	switch (escolha){
		
		case 1 :
			celsius = i;
			
			for(i = 0; i <= 100; i = i + 5){
				
				farenheit = i * 1.8 + 32;
				
				printf("\n %d em celsius igual a %.2f em farenheit.", i, farenheit);
			}
			break;
		
		case 2 : 
			farenheit = i;
			
			for(i = 0; i <= 100; i = i + 5){
				
				celsius = (i - 32) / 1.8;
				
				printf("\n %.2f em celsius igual a %d em farenheit.", celsius, i);
			}
			break;
			
				
	}
	
	
	return 0;
}