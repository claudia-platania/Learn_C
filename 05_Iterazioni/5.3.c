//Programma per generare una tabella di numeri triangolari

#include <stdio.h>

int main (void){

    int n, triangularNumber;
    
    printf("TABELLA DI NUMERI TRIANGOLARI\n\n");

    printf("n somma da 1 a n\n");
    printf("--- --------------\n");

    triangularNumber = 0;

    for ( n = 1; n <= 10; ++n ){

        triangularNumber += n;

        printf(" %2i            %i\n", n, triangularNumber);
    }


    return 0;
}


/* 

++n     -->     n = n + 1

--n     -->     n = n - 1

triangularNumber += n   -->     triangularNumber = triangularNumber + n

 */


/* 

printf(" %2i            %i\n", n, triangularNumber);


    %2i     =   lo uso per allineare i valori
            con più cifre

 */



