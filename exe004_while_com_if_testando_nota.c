#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	char parar;
	float nota = 0;
	
	printf("\n=================================================");
	printf("\nDigite a nota do aluno: ");
	scanf("\n%f", &nota);
	printf("\n=================================================");
	
	while (nota < 0 || nota > 10){ //FORÇA O USUÁRIO A DIGITAR VALORES ENTRE 0.0 E 10.0 PARA CONTINUAR
		printf("\nNOTA INCORRETA");
		printf("\nDIGITE VALORES ENTRE 0.0 E 10.0 ");
		printf("\nPor favor, digite novamente a NOTA: ");
		scanf("\n%f", &nota);
		printf("\n=================================================");
	}
	setlocale(LC_ALL, "");
	if (nota >= 6.0){
		printf("\nMédia final: %.1f", nota);
		printf("\nAluno APROVADO!");
		printf("\n=================================================");
	}else{
		printf("\nMédia final: %.1f", nota);
		printf("\nAluno REPROVADO!");
		printf("\n=================================================");
	}
	return 0;
}
