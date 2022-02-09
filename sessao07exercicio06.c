#include <stdio.h>

int main(){
    //variáveis
    int num;

    //entrada
    printf("Informe um numero entre 1 e 10: \n");
    scanf("%d", &num);

    //processamento
    while(num < 1 || num > 10){
        printf("Informe um numero entre 1 e 10. \n");
        scanf("%d", &num);
    }
    for(int i = 1; i <= 10; i++){
        //ex: 5 x 1 = 5
        printf("%d X %d = %d\n", num, i, (num * i));
    }

}