#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int opcao = 0;
	
	printf("========================================================================");
	printf("\nDigite (1) para Saldo, (2) para Extrato, (3) para Saque e (4) para Sair.");
	printf("\nA seguir informe a opção desejada: ");
	scanf("\n%d", &opcao);
	printf("========================================================================");
	
	switch(opcao){
		case 1:
			printf("\nSaldo, Abaixo seguem os dados!");
			printf("\n========================================================================");
			break;
		
		case 2:
			printf("\nExtrato, Aqui estão as informações solicitadas!");
			printf("\n========================================================================");
			break;
			
		case 3:
			printf("\nSaque, Digite o valor a ser sacado!");
			printf("\n========================================================================");
			break;
			
		case 4:
			printf("\nSaindo, Muito obrigado, tenha um bom dia!");
			printf("\n========================================================================");
			break;
		
		default:
			printf("\nOpção Inválida, por favor tente novamente!");
			printf("\n========================================================================");
	}
	return 0;
}
