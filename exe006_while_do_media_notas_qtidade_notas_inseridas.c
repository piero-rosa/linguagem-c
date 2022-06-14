#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
int main(){
	//Declaração e atribuição de variáveis
	float nota = 0,total_notas = 0, media = 0;
	int opcao = 0, i = 1;
	setlocale(LC_ALL, "portuguese");
	//Inicio DO pedindo dados ao usuário
	do {
		printf("\n======================================");
		printf("\nINSIRA A NOVA NOTA: ");
		scanf("%f", &nota);	
		printf("\n======================================");
		printf("\n (1) INSERIR NOVA NOTA\n (2) FINALIZAR");
		printf("\n  SELECIONE A OPÇÃO DESEJADA: ");
		scanf("%d", &opcao);
		total_notas = total_notas + nota;
		//inicio SWITCH pedindo que o usuario faÇa a escolha para que, o loop possa iniciar ou encerrar o mesmo.
		switch (opcao){
				case 1:
					i++;
					break;
				case 2:
					printf("\n======================================");
					printf("\nFINALIZANDO...");
					sleep(1.8);
					media = total_notas / (float) i;
					printf("\n======================================");
					printf("\nMédia da turma: %.1f", media);
					printf("\nNúmero de notas inseridas: %d", i);
					printf("\n======================================");
					break;
				default:
					printf("\n%d Opção Inválida!",  opcao);
					printf("\n======================================");
			}
    }while(opcao != 2);
	return 0;
}
