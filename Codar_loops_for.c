#include <stdio.h>

int main(){

    int l, c;
    char letra;

    for(l = 1; l <= 5; l++)/*loop for externo, linhas*/{
        
        letra = 'A';
        for(c = 1; c <= l; c++)/*loop interno, colunas*/{
            
            printf("%c ", letra);
            ++letra;
        }
    printf("\n");
    
    }
     return 0;
}    