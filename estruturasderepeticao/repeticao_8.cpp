//Escreva um algoritmo que mostre a tabuada de um numero inteiro qualquer que sera digitado pelousuario, mas a tabuada nao deve necessariamente iniciar em 1 e terminar em 10, ou seja, o 
//valorinicial e final devem ser informados tambem pelo usuario, conforme mostrado no exemplo a seguir

#include<stdio.h>
int main(){
	int tabuada, inicio, termina, i, resultado;
	
	printf("Mostrar tabuada de: ");
	scanf("%d", &tabuada);
	
	printf("Comecar por: ");
	scanf("%d", &inicio);
	
	printf("terminar em: ");
	scanf("%d", &termina);
	
	for(i = inicio; i <= termina; i++){
		
		resultado = tabuada * i;
		
		printf("\n %d x %d = %d", tabuada, i, resultado);
		
	}
	return 0;
}