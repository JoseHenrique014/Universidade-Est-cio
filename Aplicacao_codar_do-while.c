#include <stdio.h>

int main(){

    int numero;
    
    do{

        printf("Digite um número par para sair do programa...\n");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d é par!\n", numero);

        }else {
            printf("%d é imapar\n", numero);
        }

    } while (numero % 2 != 0);

    printf("você digitou um número par! Saindo do prgrama...\n");
    return 0;
}