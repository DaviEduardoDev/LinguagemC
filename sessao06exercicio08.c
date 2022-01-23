#include <stdio.h>

int main() {
	//variáveis
	int numero;

	//entradas
	printf("Informe um numero: ");
	scanf("%d", &numero);

	//processamento
	if(numero % 2 == 0){
		if(numero > 0){
		printf("O numero %d é par e positivo. " , numero);
		}else{
			printf("O numero %d é par e negativo. ", numero);
		}
	}else{
		if(numero > 0){
			printf("o numero %d é impar e positivo. ", numero);
		}else{
			printf("O numero %d é impar e negativo. ", numero);
		}
	}
	system("pause");
	return 0;
}
