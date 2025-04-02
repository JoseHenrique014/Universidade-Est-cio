#include <stdio.h>

int main(){
    int nota1, nota2, nota3, nota4;
    float media;

    printf("**** Calculando sua Média ****\n");

    printf("Digite sua primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite sua terceira nota: \n");
    scanf("%d", &nota3);

    printf("Digite sua quarta nota: \n");
    scanf("%d", &nota4);

    media = (float) (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A média é: %.1f\n", media);

    return 0;
}
