//  ESERCIZI

#include <stdio.h>

int main (void){

    int n;
    int result = 0;

    printf("Tabella quadrati numeri. \n");

    printf("----    ----\n");

    for ( n = 1; n <= 10; n++){

        result = n * n;

        printf("%2i        %i\n", n, result);

    }

    return 0;
}




/* 

printf("%2i        %i\n", n, result);


    %2i     =   lo uso per allineare i valori
            con più cifre

 */
