//Crie uma estrutura com o código e a quantidade em estoque de 5 produtos.
// Em seguida, leia umpedido composto por um código de produto e quantidade.
// Se houver quantidade suficiente paraatender ao pedido integralmente, 
//atualize a quantidade em estoque do produto e apresente amensagem "Estoque atualizado",
// caso contrário, apresente a mensagem "Quantidade insuficiente emestoque

#include<stdio.h>
#include<locale.h>

struct produto{
	int codigo_produto, quantidade_estoque;
};

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	struct produto produto[5] = {{1,100}, {2,100}, {3,100}, {4,100}, {5,100}};
	
	int	codigo_produto, quantidade_estoque,i, encontrado;
	
	encontrado = 0;
	
	printf("informe codigo do produto: ");
	scanf("%d", &codigo_produto);
	
	for(i = 0; i < 5;i++){
		if(produto[i].codigo_produto == codigo_produto){
			encontrado = 1;
			break;
		}
	}

	printf("informe quantidade do produto: ");
	scanf("%d", &quantidade_estoque);
	
	
	
	if(produto[i].quantidade_estoque >= quantidade_estoque){
		produto[i].quantidade_estoque -= quantidade_estoque;
		printf("esotoque atualizado produto %d: %d unidades.", produto[i].codigo_produto, produto[i].quantidade_estoque);
	}
	else{
		printf("quantidade insuficiente em estoque.");
	}
		
	return 0;
}
