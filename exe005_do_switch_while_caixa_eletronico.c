#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>//necessário para usar sleep()

int main(){
	//Delaração e atribuição de variáveis
	float saldo = 0, valor = 0;
	int opcao = 0;

	setlocale(LC_ALL, "portuguese");
	//Inicio "DO/FAÇA", mostrando o menu ao usuário e pedindo que escolha alguma das opções!
	do {
		printf("\n====================================================");
		printf("\n                CAIXA ELETRÔNICO                    ");
		printf("\n====================================================");
		printf("\n (1) DEPÓSITO\n (2) SAQUE\n (3) SALDO\n (4) EXTRATO\n (5) SAIR");
		printf("\n----------------------------------------------------");
		printf("\n ESCOLHA UM DAS OPÇÕES ACIMA: ");
		scanf("%d", &opcao);
		printf("\n----------------------------------------------------");
		//Inicio do SWITCH/ESCOLHA, este bloco irá ser a base de códigos para as escolhas feitas acima
		switch(opcao){
			case 1:
				printf("\n DEPÓSITO\n Informe o valor: ");
				scanf("%f", &valor);
				saldo += valor;
				printf("\n SALDO ATUAL: %.2f", saldo);
				("\n====================================================");
				break;
			case 2:
				printf("\n SAQUE\n Informe o valor: ");
				scanf("%f", &valor);
				saldo -= valor;
				printf("\n SALDO ATUAL: %.2f", saldo);
				("\n====================================================");;
				break;
			case 3:
				printf("\n SALDO ATUAL: %.2f", saldo);
				("\n====================================================");
				break;
			case 4:
				printf("\n EXTRATO");
				printf("\n DESCULPE AINDA ESTAMOS IMPLEMENTANDO ESTA FUNÇÃO!");
				("\n====================================================");
				break;
			case 5:
				printf("\n FINALIZANDO...");
				printf("\n====================================================");
				sleep(1.8);
				break;
			default:
				printf("\n%d opção inválida", opcao);
				printf("\n====================================================");
		}
	}while (opcao != 5);
	printf("\n Operação encerrada, Tenha um ótimo dia!");
	printf("\n====================================================");
	return 0;
}
