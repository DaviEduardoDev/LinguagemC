#include <stdio.h>

int main(){
	float m, peso;
	char e[8]="excesso";

	printf("informe o peso dos peixes. \n");
	scanf("%f", &peso);

	if(peso>50){
		m=(peso-50) *4.00;
		printf("Você deverá pagar %.2f em multa \n", m);
	}
	else{
		m=0;
		e[0]=0;
		printf(" Multas: %.2f\n", m);
		printf("Excesso: %d\n", e[0]);
	}
	system("pause");
	return 0;
}
