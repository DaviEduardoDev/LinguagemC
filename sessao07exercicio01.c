#include <stdio.h>

int main(){
	//variáveis
	int n, maior=0;

	//entradas
	printf("Informe um numero: ");
	scanf("%d", &n);

	//processamento
	while(n != 0){
		if(n > maior){
			maior = n;
		}
		printf("Informe um numero: ");
		scanf("%d", &n);
	}
	printf(" Maior numero é %d ", maior);

	system("pause");
	return 0;
}
