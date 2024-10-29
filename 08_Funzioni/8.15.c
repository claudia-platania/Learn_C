//Calcolo ricorsivo dei fattoriali
//Funzioni Ricorsive

#include <stdio.h>

unsigned long int factorial ( unsigned int n );     //funzione --> che ha in ingresso "unsigned int n"  --> ( n = j )


int main (void){

    unsigned int j;     //unsigned = senza segno    -->     più efficiente  -->     rappresenta solo i positivi ( + )
    
    for( j = 0; j < 11; ++j ){
        printf("%2u! = %lu\n", j, factorial(j));   // %u   =   si usa perchè unsigned
                                //factorial(j)  =   la funzione utilizzando j come valore in ingresso che nella funzione sarà n
    }

    return 0;
}


/* Funzione ricorsiva per calcolare il fattoriale
di un intero positivo */


unsigned long int factorial(unsigned int n){

    unsigned long int result;

    if( n == 0 ){       // n == 0   -->    se n = 0 
        result = 1;
    } else {
        result = n * factorial ( n - 1 );
    }

    return result;
}


/* 

==      -->     se è uguale

=       -->     rendi uguale

 */


