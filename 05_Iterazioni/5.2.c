//Programma per calcolare il duecentesimo numero triangolare
// FOR

#include <stdio.h>

int main (void){

    int n, triangularNumber;

    triangularNumber = 0;

    for ( n = 1; n <= 200; n = n + 1){
        triangularNumber = triangularNumber + n;
    }

    /*

    n = 1;
    for ( ; n <= 200;){
        triangularNumber = triangularNumber + n;

        n = n + 1;
    }

    n = 1;
    while (n <= 200){
        triangularNumber = triangularNumber + n;

        n = n + 1;
    }
    
    */

    printf("Il duecentesimo numero triangolare è %i\n", triangularNumber);

    return 0;
}


/* 
    ==      -->     uguale
    !=      -->     diverso
    <       -->     minore
    <=      -->     minore o uguale
    >       -->     maggiore
    >=      -->     maggiore o uguale

a < b + c   -->     a < ( b + c )

a == 2      -->     verifica se il valore di a è uguale a 2

a = 2       -->     assegna il valore 2 alla variabile a

 */



/* 

Lìistruizione _for_ fornisce il meccanismo che permette
di evitare di scrivere tutti gli interi da 1 a 200.

Questa istruzione è utilizzata per "generare"
automaticamente questi numeri.


FOR ( espressione_iniziale ; condizione_del_ciclo ; espressione_di_ciclo ){
    istruzione ( istruzioni ) del programma
    ...
    }


espresszione_iniziale   =   imposta i valori iniziali
                        prima che cominci il ciclo

condizione_del_ciclo    =   condizioni necessarie affinchè
                        il ciclo possa continuare
                        Il ciclo continua finchè questa
                        condizione viene soddisfatta
                        Se la condizione è VERA eseguo
                        un giro del ciclo for

espressione_del_ciclo   =   è l'ultima espressione
                        di un giro del for
                        ( eseguita alla fine )
                        Alla fine incremento n di 1
                        e dopo ricomincio il controllo
                        del for

istruzione ( istruzioni ) del programma    =   questa istruzione
                                        viene eseguita tante
                                        volte quante ne indicano
                                            i parametri
                                        dell'istruzione for

 */

