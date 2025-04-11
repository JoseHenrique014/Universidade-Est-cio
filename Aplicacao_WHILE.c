#include <stdio.h>

int main(){

    int i;

    printf("Digite um número maior que dez para sair: \n");
    scanf("%d", &i);

    while (i <= 10){
        printf("Você digitou: %d\n", i);
       
        printf("Digite um número maior que dez para sair: \n");
        scanf("%d", &i);
    }
    
        printf("numero maior que dez detectado...\n");
    return 0;
}