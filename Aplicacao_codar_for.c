#include <stdio.h>

int main(){

    int numero, j;

    printf("Digite um número para cálcular a tabuada...\n");
    scanf("%d", &numero);

    for(j = 0; j <= 10; j++){
        printf("%d x %d = %d \n", j, numero, j * numero);
    }

    return 0;
}