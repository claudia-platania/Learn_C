//Programma per generare una tabella di numeri primi
//VARIABILI BOOLEANE

#include <stdio.h>
#include <stdbool.h>

int main (void){

    int p, d;
    _Bool isPrime;

    for ( p = 2; p <= 50; ++p ){

        isPrime = 1;        //Vero
    
        for ( d = 2; d < p; ++d ){
            if ( p % d == 0 )
                isPrime = 0;        //Falso
        }
    
        if ( isPrime != 0 ){        //Vero
            printf("%i", p);
        }
    }

    printf("\n");
    
    return 0;
}



/* 

Un intero positivo P è primo se non è divisibile per
altri numeri interi, tranne che per 1 e se stesso


BOOLE:

1   =   Vero

0   =   Falso


 */






