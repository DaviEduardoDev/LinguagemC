#include <stdio.h>
#include <ctype.h>

int main(){
	float altura, peso_ideal;
	char sexo;

	printf("informe sua altura: ");
	scanf("%f", &altura);
	gets(stdin);
	printf("informe seu sexo m/f: ");
	scanf("%c", &sexo);

	if (tolower(sexo)=='m'){
		peso_ideal=(72.7*altura)-58;
		printf("Seu peso ideal seria %.2f\n", peso_ideal);
	}
	if (tolower(sexo)=='f'){
		peso_ideal=(62.1*altura)- 44.7;
		printf("Seu peso ideal seria %.2f\n", peso_ideal);
	}
	if (tolower(sexo)!='m' && tolower(sexo)!='f'){
		printf("Sexo não reconhecido.\n");
	}
	system("pause");
	return 0;
}
