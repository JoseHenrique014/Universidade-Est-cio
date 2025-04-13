#include <stdio.h>

int main(){

    for(int p = 1; p <= 10; p++){
        
        for( int j = 1; j <= 10; j++){
            
            printf("%d x %d = %d\n", p, j, p * j);
        }
        
        printf("\n");
    
    }


    return 0;
}


