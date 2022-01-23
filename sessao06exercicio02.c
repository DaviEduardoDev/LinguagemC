#include <stdio.h>

int main(){
	int n, a, b;

	printf("Informe um valor: ");
	scanf("%d", &n);

	if (n>0) {
		a=n;
		printf("Valor %d positivo. ", n);
	}
	else {
		b=n;
		printf("Valor %d negativo. ", n);
	}
}
