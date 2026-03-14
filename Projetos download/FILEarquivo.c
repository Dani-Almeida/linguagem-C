#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "C");

	char linha[200];
	FILE *arquivo;
	
	arquivo = fopen("Teste.txt","a+");
	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo. \n");
		system("pause");
		exit(-1);
	}
	
	printf("Digite seu texto: \n");
	
	while(strcmp("/exit", linha) != 0 ){
		strcpy(linha, "");
		gets (linha);
		fflush(stdin);
		if((strcmp("/exit", linha) != 0)){
			fputs(linha,arquivo);
			fputs("\n",arquivo);
		}
	}
	fclose(arquivo);
		
}
