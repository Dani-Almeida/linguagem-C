#include <stdio.h>
#include <stdlib.h>

#define TAM 3

struct tipo_pessoa{
	char nome[50];
	char telefone [20];
};
typedef struct tipo_pessoa tipo_pessoa;

int main(){
	
	tipo_pessoa lista[TAM];
	int i;
	
	for(i=0; i<TAM; i++){
		printf("Insira o nome de uma pessoa: \n");
		gets(lista[i].nome);
		fflush(stdin);
		printf("Insira o telefone dessa pessoa: \n");
		gets(lista[i].telefone);
		fflush(stdin);
	}
	system("cls");
	printf("Os dados inseridos foram: \n\n");
	
	for(i=0; i<TAM; i++){
		printf("%s - %s\n", lista[i].nome, lista[i].telefone);
	}
}
