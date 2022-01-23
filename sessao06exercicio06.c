#include <stdio.h>

int main(){

	int c;
	float n, e, salario, valor_h=10.00;

	printf("Informe o código: ");
	scanf("%d", &c);
	printf("Informe a quantidade de horas trabalhadas: ");
	scanf("%f", &n);

	if(n>50){
		e=(n-50)*20.00;
		salario=(50*valor_h)+e;
		printf(" Salário total R$ %.2f\n", salario);
		printf("Salário excedente R$ %.2f", e);

	}
	else{
		salario=n*valor_h;
		printf("Salário total %.2f\n", salario);
		printf("Salário excedente %.2f", e);
	}
	system("pause");
	return 0;
}
