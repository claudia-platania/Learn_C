//Chidere un Input all'utente

#include <stdio.h>

int main (void){

    int n, number, triangularNumber;

    printf("Quale numero triangolare vuoi calcolare? ");
    scanf("%i", &number);

    triangularNumber = 0;

    /* 
    PRE_INCREMENTO ( prima incremento e poi leggo )

    n = 1;
    int a = ++n;    --> a = 2   ,   n = 2


    POST_INCREMENTO ( prima leggo e dopo incremento )

    n = 1;
    int b = n++;    --> b = 1   ,   n = 2
    */

    for( n = 1; n <= number; ++n ){

        triangularNumber += n;
    }

    printf("IL numero triangolare di ordine %i è %i\n", number, triangularNumber);

    return 0;

}


/* 

Riga 10:     scanf("%i", &number);

            - %i    =   specifica un valore intero
            - &number   =   specifica DOVE deve essere memorizzato
                        il valore digitato dall'utente

Questo valore ( number ) rappresenta il particolare
numero triangolare che l'utente vuole calcolare

 */







