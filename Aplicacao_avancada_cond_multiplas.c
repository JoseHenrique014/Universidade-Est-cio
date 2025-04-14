#include <stdio.h>

int main(){

    for(int i = 0, j = 10; i < j; i++, j--){ //Enquanto i for menor que j, continuará imprimindo
        printf("i = %d, j = %d \n", i, j);   //os resultados. nesse caso não imprime i = 5 e 
    }                                        // j = 5, devido os valores serem iguais. Caso
                                             // eu ponha a variável i <= j, ele imprimirá
                                             // i = 5, j = 5.


    return 0;
}