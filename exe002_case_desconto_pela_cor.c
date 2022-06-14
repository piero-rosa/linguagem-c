#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	char cor;
	float valor = 0, desconto = 0, total = 0;
	
	printf("\n============================================================");
	printf("\nInsira o valor do produto R$: ");
	scanf("\n%f", &valor);
	printf("\n============================================================");
	printf("\nSELECIONE UM DAS CORES PARA RECEBER UM DESCONTO SURPRESA: ");
	printf("\n============================================================");
	printf("\n(a) para Azul\n(v) para Vermelho\n(b) para Branco");
	printf("\nSelecione a op��o desejada: ");
	scanf("\n%s", &cor);
	printf("\n============================================================");
	//Evitando erros por inser��o de letras MAI�SCULAS fazendo essa simples verifica��o.
	if (cor == 'A'){
		cor = 'a';
	}else if (cor == 'V'){
		cor = 'v';
	}else if (cor == 'B'){
		cor = 'b';
	}
	switch (cor){ //usando escolha caso
		case 'a':
			printf("\nCor selecionada: AZUL, desconto ser� 30%%");
			desconto = valor * 0.3;
			printf("\n============================================================");
			break;
			
		case 'v':
			printf("\nCor selecionada: VERMELHO, desconto ser� 20%%");
			desconto = valor * 0.2;
			printf("\n============================================================");
			break;
			
		case 'b':
			printf("\nCor selecionada: BRANCO, desconto ser� 10%%");
			desconto = valor * 0.1;
			printf("\n============================================================");
			break;
			
		default:
			printf("\nOp��o inv�lida, nenhum desocnto ser� aplicado!");
			desconto = 0;
			printf("\n============================================================");
	}
	total = valor - desconto; //fazendo o calculo do desconto final
	printf("\nDesconto Aplicado R$: %.2f", desconto);
	printf("\nO valor total de sua compra � R$: %.2f", total);
	printf("\n============================================================");
	return 0;
}
