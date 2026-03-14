#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int mat [3][3];
	int i,j; // i representa as linhas e j representa as colunas.
	
	// Pedir para o usuário informar os valores de mat [i][j]
	for(i = 0; i < 3; i++){ // i < 3 ou i <= 2
		for(j = 0; j < 3; j++){
			printf ("Insira o elemento mat [%d][%d]: \n", i, j);
			scanf ("%d" , &mat[i][j]);
			fflush(stdin);
		}
	}
	
	//executar a lógica da saída de dados que o enunciado pede
	for(i = 0; i < 3; i++){ 
		for(j = 0; j < 3; j++){
			if(i==j){ // Estou acessando a diagonal principal
				printf("%d " , mat[i][j]);
			}else{
				printf("0 ");
			}
		}
		printf("\n");
	}
}

