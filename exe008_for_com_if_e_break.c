#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<unistd.h>

int main(){
	int i = 1;
	int parar_em = 31;
	setlocale(LC_ALL,"portuguese");
	printf("==============================================\n");
	printf("VOCÊ TERÁ 30 SEGUNDOS PARA IR NO BANHEIRO!\n");
	sleep(3.5);
	printf("PREPARANDO PARA INICIAR A CONTAGEM...\n");
	sleep(3.5);
	printf("VALENDOOO...\n");
	printf("==============================================\n");
	sleep(1.5);
	for(i; i < 100; i++){
		if (i == parar_em){
			break;
		}
		sleep(1);
		printf("%d\n", i);
	}
	printf("==============================================\n");
	printf("SEU TEMPO ESGOTOU!!!\n");
	printf("==============================================\n");
}
