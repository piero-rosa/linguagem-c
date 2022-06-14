#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float salario = 0, inss = 0, imposto = 0, salario_liquido = 0;
	
	setlocale(LC_ALL,"");
	printf("Digite o valor do salário R$: ");
	scanf("%f", &salario);
	
	printf("==================================================");
	if (salario <= 1045){
		inss = salario * 0.075;
	}else if ((salario >= 1045.01) && (salario <= 2089.60)){
		inss = salario * 0.09;
	}else if ((salario >= 2089.61) && (salario <= 3134.40)){
		inss = salario * 0.12;
	}else{
		inss = salario * 0.14;
	}
	if (salario <= 1903.98){
		imposto = 0;
	}else if ((salario >= 1903.99) && (salario <= 2826.65)){
		imposto = salario * 0.075;
	}else if ((salario >=2826.66) && (salario <= 3751.05)){
		imposto = salario * 0.15;
	}else if ((salario >= 3751.06) && (salario <= 4664.68)){
		imposto = salario * 0.225;
	}else{
		imposto = salario * 0.275;
	}
	salario_liquido = (salario - inss) - imposto;
	printf("==================================================");
	printf("\nSeu salário liquido é R$: %.2f reais!", salario_liquido);
}
