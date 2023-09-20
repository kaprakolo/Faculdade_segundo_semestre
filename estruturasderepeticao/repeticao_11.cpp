//Escreva um algoritmo que escreva os 10 primeiros termos da serie 1, 3, 9, 27, ...
#include <stdio.h>

int main() {
    char continuar;
    int serie_3, i;

    do {
        // Coloque aqui o codigo que deseja repetir
        
        for(i = 1; i <= 10; i++){
        	
        	serie_3 = serie_3 * 3;
        	printf(" %d,", serie_3);
        	
		}
        printf("\nDeseja repetir o codigo? (s/n): ");
        scanf(" %c", &continuar);  // Espaco antes de %c para ignorar espacos e quebras de linha

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
