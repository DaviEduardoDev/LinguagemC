#include <stdio.h>

int main(){
	//variaveis
	int valor, maior=-999, menor=999, soma =0;
	float media;

	//entradas
	for(int i = 0; i < 10; i++){
		printf("Informe um valor: ");
		scanf("%d", &valor);
		//processamento
		if(valor > 0){
			if(valor > maior){
				maior = valor;
			}
			if(valor < menor){
				menor= valor;
			}
			soma = soma + valor;
		}else{
			i--;
	}
	}
		media = soma / 10;
		printf("O maior numero é %d\n ", maior);
		printf("O menor numero é %d\n ", menor);
		printf("A media dos numeros é %2.f", media);

		system("pause");
		return 0;
}
