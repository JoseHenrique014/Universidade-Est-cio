#include <stdio.h>

int main(){
    int Num1 = 70, num2 = 20;
    int maior;

    maior = Num1 > num2 ? Num1 : num2;

    if(maior == 1){
        printf("Maior número: %d\n", maior);
    } else {
        printf("Número maior: %d\n", maior);
    }
}