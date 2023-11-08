#include<stdio.h>
#include<locale.h>

struct Pessoa{
	char nome[21];
	float altura, renda;
};

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	struct Pessoa pessoa[2] = { {"Ana", 1.75, 576.13}, {"Pedro", 1.82, 3780.25}};
	
	int i;
	
	printf("Nome	     		    Altura	Renda");
	printf("\n------------------------------------------------");
	
	for(i = 0; i < 2; i++){
		printf("\n%-20s	%10.2f %10.2f", pessoa[i].nome, pessoa[i].altura, pessoa[i].renda);
	}
	
	return 0;
}
	
