# linguagem C
//Programa desenvolvido em visual Code para Calcular o IMC(Índice de Massa Corporal).


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");
	
	float peso, altura, imc;
	char op;
	
	do{
		printf ("Insira a sua altura:\n");
		scanf ("%f", &altura);
		fflush (stdin); //para não bugar o programa, não travar o teclado.
		
		printf ("Insira o seu peso:\n");
		scanf ("%f", &peso);
		fflush (stdin); //para não bugar o programa, não travar o teclado.
		
		imc = peso / (altura * altura);
		
		printf ("Seu IMC é: %.2f.\n", imc);		
		
		if (imc < 18.5){
			printf ("Abaixo do peso.\n");
		}
		else if (imc >= 18.5 && imc <= 24.9) {
        	printf("Classificacao: Peso normal\n");
    	} 
    	else if (imc >= 25.0 && imc <= 29.9) {
        	printf("Classificacao: Sobrepeso\n");
   		} 
    	else if (imc >= 30.0 && imc <= 34.9) {
        	printf("Classificacao: Obesidade grau I\n");
    	} 
    	else if (imc >= 35.0 && imc <= 39.9) {
        	printf("Classificacao: Obesidade grau II\n");
    	} 	
		else if (imc >= 40.0){
			printf ("Obesidade grau III (obesidade grave)");
		}
		

		printf ("Deseja executar novamente? Se sim, digite Y\n");
		scanf ("%c", &op);
		fflush (stdin);
		
	} while (op == 'y' || op == 'Y');
}
