#include <stdio.h>
#include <string.h>

int main(){
	//variáveis
	char nome[100], senha[100];

	//entradas
	printf("Informe o nome: ");
	gets(nome);

	printf("Informe a senha: ");
	gets(senha);

	//processamento
	while(!strcmp(nome, senha)){
		printf("O nome informado deve ser diferente da senha. \n");
		printf("Informe o  nome: ");
		gets(nome);
		printf("Informe a senha: ");
		gets(senha);
	}

	system("pause");
	return 0;
}
