#include <stdio.h>

int main(){
	int quant_hrs, val_hrs, salario;

	printf("Informe a quantidade de horas trabalhadas: ");
	scanf("%d", &quant_hrs);
	printf("Informe o valor das horas trabalhadas: ");
	scanf("%d", &val_hrs);

	salario=(quant_hrs*val_hrs);

	printf("Seu salario do mes é %d", salario);
}
