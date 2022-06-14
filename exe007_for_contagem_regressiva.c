#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<unistd.h>
int main(){
	//Declarando e atribuindo valores as variáveis
	int i = 0;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("===================================================\n");
	printf("Insira um número para a contagem regressiva: \n");
	scanf("%d", &i);
	printf("===================================================\n");
	printf("CONTADOR INICIALIZADO...\n");
	sleep(1.8);
	printf("EM %d SEGUNDOS SERÁ O FIM...\n", i);
	printf("===================================================\n");
	sleep(1.5);
	
	for(i; i >= 1; i--){
		sleep(1);
		printf("%d\n", i);
	}
	printf("===================================================\n");
	printf("BOOMMM !!!\n");
	printf("===================================================\n");
	return 0;
}
