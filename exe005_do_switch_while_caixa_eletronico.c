#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>//necess�rio para usar sleep()

int main(){
	//Delara��o e atribui��o de vari�veis
	float saldo = 0, valor = 0;
	int opcao = 0;

	setlocale(LC_ALL, "portuguese");
	//Inicio "DO/FA�A", mostrando o menu ao usu�rio e pedindo que escolha alguma das op��es!
	do {
		printf("\n====================================================");
		printf("\n                CAIXA ELETR�NICO                    ");
		printf("\n====================================================");
		printf("\n (1) DEP�SITO\n (2) SAQUE\n (3) SALDO\n (4) EXTRATO\n (5) SAIR");
		printf("\n----------------------------------------------------");
		printf("\n ESCOLHA UM DAS OP��ES ACIMA: ");
		scanf("%d", &opcao);
		printf("\n----------------------------------------------------");
		//Inicio do SWITCH/ESCOLHA, este bloco ir� ser a base de c�digos para as escolhas feitas acima
		switch(opcao){
			case 1:
				printf("\n DEP�SITO\n Informe o valor: ");
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
				printf("\n DESCULPE AINDA ESTAMOS IMPLEMENTANDO ESTA FUN��O!");
				("\n====================================================");
				break;
			case 5:
				printf("\n FINALIZANDO...");
				printf("\n====================================================");
				sleep(1.8);
				break;
			default:
				printf("\n%d op��o inv�lida", opcao);
				printf("\n====================================================");
		}
	}while (opcao != 5);
	printf("\n Opera��o encerrada, Tenha um �timo dia!");
	printf("\n====================================================");
	return 0;
}
