#include <stdio.h>

int main(){
    int a = -10;
    int b = -5;

    if( a > 0 || b > 0){
        printf("Pelo menos um número é positivo.\n");
    } else {
        printf("Os dois números são negativo.\n");
    }
}