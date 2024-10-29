//Programma per presentare l'istruzione WHILE

#include <stdio.h>

int main (void){

    int count = 1;

    while ( count <= 5 ){
        
        printf("%i\n", count);

        ++count;

    }

    return 0;
}


/* 

WHILE ( espressione ){

    istruzione ( o istruzioni ) del programma
}


Viene valutata l'espressione tra parentesi

Se il risultato è VERO, viene eseguita l'istruzione del programma
che si trova subito dopo.

DOpo l'esecuzione di questa istruzione ( o istruzioni )
viene valutata di nuovo l'espressione ( ).

Questo processo CONTINUA finchè l'espressione
non risulta FALSA; a questo punto il ciclo termina


 */


/* 

LO stesso compito svolto da un'istruzione FOR può essere
eseguito da un'istruzione WHILE



FOR ( espressione_iniziale; condizione_del_ciclo; espressione_del_ciclo ){

    istruzione ( o istruzioni ) del programma
}


espressione_iniziale
WHILE ( condizione_del_ciclo ){

    istruzione ( o istruzioni ) del programma
    espressione_del_ciclo
}



 */
