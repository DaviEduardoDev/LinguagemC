#include <stdio.h>

int main(){
	float altura, peso;

	printf("Qual é a sua altura? ");
	scanf("%f", &altura);

	peso=(72.7*altura)-58;

	printf("O peso ideal para sua altura seria %.2f", peso);
}
