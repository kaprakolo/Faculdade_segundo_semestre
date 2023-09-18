//Escreva um algoritmo que calcule o fatorial de um numero positivo qualquer.
// Por exemplo, se onumero for 5, o resultado sera 120 (5 * 4 * 3 * 2 * 1 = 120). E importante obsevar que o fatorial donumero 0 e igual a 1
#include<stdio.h>
int main(){
	char continuar;

    do {
        int i, fatorial, resultado = 1;
	
		printf("insira numero: ");
		scanf("%d", &fatorial);
		
		if(fatorial != 0){
			for(i = 1; i <= fatorial; i++){
		
			resultado = resultado * i;
		}	
	printf("o resultado e : %d", resultado);
			
		}
		else{
			printf("o resultado e : 1");
}
	

    printf("\nDeseja repetir o codigo? (s/n): ");
    scanf(" %c", &continuar);  // Espaco antes de %c para ignorar espacos e quebras de linha
}
    while (continuar == 's' || continuar == 'S');

    return 0;
}
