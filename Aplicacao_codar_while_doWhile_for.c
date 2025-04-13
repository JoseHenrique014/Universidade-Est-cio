#include <stdio.h>

int main(){

    int p = 0;

    while (p <= 10){

        if(p % 2 == 0){
            printf("O número %d é par!\n", p);
        }

        p++;
    }

   return 0;
}