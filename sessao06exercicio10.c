#include <stdio.h>

int main(){
	//variáveis
	int idade;

	//entradas
	printf("Informe sua idede: ");
	scanf("%d", &idade);

	//processsamento
	if(idade < 5){
		printf("A idade minima para se enquadrar em uma categoria é de 5 anos.");
	}
	if(idade >= 5 && idade <= 7){
		printf("Infantil A. ");
	}
	if(idade >= 8 && idade <= 11){
		printf("Infantil B. ");
	}
	if(idade >= 12 && idade <= 13){
		printf("Juvenil A. ");
	}
	if(idade>= 14 && idade <= 17){
		printf("Juvenil B. ");
	}
	if(idade>=18){
		printf("Adulto. ");
	}

	system("pause");
	return 0;
}
