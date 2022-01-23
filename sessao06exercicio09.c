#include <stdio.h>

int main(){
	//variáveis
	float poluicao;

	//entradas
	printf("Ìndice de poluição: ");
	scanf("%f", &poluicao);

	//processamento
	if(poluicao >= 0.3 && poluicao < 0.4){
		printf("Grupo 1, suspender as atividades. ");
	}else if(poluicao >= 0.4 && poluicao < 0.5) {
		printf("Grupo 1 e grupo 2, suspender as atividades. ");
	}else if(poluicao >= 0.5){
		printf("Todos os grupos, suspender as atividades. ");
	}else{
		printf("Níveis acessiveis. ");

	}
	system("pause");
	return 0;
}
