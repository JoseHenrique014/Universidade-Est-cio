#include <stdio.h>

int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if( numero > 0){
        if (numero % 2 == 0){
            printf("Número pá\n");
        } else {
            printf("Número Ímpar\n");
        }
        
    } else if(numero == 0){
        printf("Número Zero\n");
    } else {
        printf("Número Negativo\n");
    }
}